import cv2
import os
import dlib
from fer import FER
from imutils import face_utils

# Inisialisasi detektor ekspresi dan deteksi wajah
emotion_detector = FER()
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')
cap = cv2.VideoCapture(0)

# Inisialisasi detektor landmark dlib
predictor_path = "shape_predictor_68_face_landmarks.dat"
face_detector = dlib.get_frontal_face_detector()
landmark_predictor = dlib.shape_predictor(predictor_path)

# Membuat folder utama jika belum ada
base_folder = 'captured_data'
if not os.path.exists(base_folder):
    os.makedirs(base_folder)

file_count = 0
file_counts_by_emotion = {'netral': 0, 'senang': 0, 'terkejut': 0, 'marah': 0}


# Fungsi untuk membuat folder berdasarkan ekspresi
def create_emotion_folders(emotion):
    emotion_folder = os.path.join(base_folder, emotion)
    if not os.path.exists(emotion_folder):
        os.makedirs(emotion_folder)

    rgb_folder = os.path.join(emotion_folder, 'RGB')
    gray_folder = os.path.join(emotion_folder, 'Grayscale')
    binary_folder = os.path.join(emotion_folder, 'Binary')
    data_folder = os.path.join(emotion_folder, 'Data')

    for folder in [rgb_folder, gray_folder, binary_folder, data_folder]:
        if not os.path.exists(folder):
            os.makedirs(folder)

    return rgb_folder, gray_folder, binary_folder, data_folder


while True:
    _, img = cap.read()  # Main window
    _, img_frame = cap.read()  # RGB image
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)  # Grayscale image
    _, binary = cv2.threshold(gray, 100, 255, cv2.THRESH_BINARY)  # Binary image

    # Deteksi wajah
    faces = face_cascade.detectMultiScale(gray, 1.1, 9)
    dlib_faces = face_detector(gray, 0)  # Untuk deteksi landmark

    for (x, y, w, h) in faces:
        # Memotong wajah untuk analisis ekspresi
        face_roi = img[y:y + h, x:x + w]

        # Deteksi emosi menggunakan FER
        emotions = emotion_detector.detect_emotions(face_roi)

        if emotions:
            emotion_scores = emotions[0]["emotions"]
            top_emotion = max(emotion_scores, key=emotion_scores.get)
            top_emotion_score = emotion_scores[top_emotion]

            # Cek persyaratan untuk setiap emosi (60% kecuali marah 40%)
            if (top_emotion == 'marah' and top_emotion_score > 0.4) or (
                    top_emotion in ['netral', 'senang', 'terkejut'] and top_emotion_score > 0.6):
                print(f'Ekspresi Terdeteksi: {top_emotion} ({top_emotion_score * 100:.2f}%)')

                # Membuat folder berdasarkan ekspresi
                rgb_folder, gray_folder, binary_folder, data_folder = create_emotion_folders(top_emotion)

                # Simpan gambar RGB, Grayscale, Binary, dan Data Biner
                rgb_filename = f'img_{file_count}_rgb.jpg'
                gray_filename = f'img_{file_count}_gray.jpg'
                binary_filename = f'img_{file_count}_binary.jpg'
                data_filename = f'data_{file_count}.txt'

                # Ambil bagian wajah dari setiap tipe gambar
                ic = img_frame[y:y + h, x:x + w]
                gc = gray[y:y + h, x:x + w]
                bc = binary[y:y + h, x:x + w]

                # Simpan gambar dalam folder sesuai ekspresi
                cv2.imwrite(os.path.join(rgb_folder, rgb_filename), ic)
                cv2.imwrite(os.path.join(gray_folder, gray_filename), gc)
                cv2.imwrite(os.path.join(binary_folder, binary_filename), bc)

                # Binerisasi data
                data = (bc / 255).astype(int)

                # Simpan data biner
                with open(os.path.join(data_folder, data_filename), 'w') as file:
                    for row in data:
                        file.write(''.join(map(str, row)) + '\n')

                file_count += 1
                file_counts_by_emotion[top_emotion] += 1

                # Tampilkan jumlah file yang ditulis
                print(f"Total file untuk ekspresi '{top_emotion}': {file_counts_by_emotion[top_emotion]}")

            # Gambar bounding box dan teks emosi di sekitar wajah
            cv2.rectangle(img, (x, y), (x + w, y + h), (0, 255, 0), 2)
            cv2.putText(img, f'{top_emotion} ({top_emotion_score * 100:.2f}%)', (x, y - 10), cv2.FONT_HERSHEY_SIMPLEX,
                        0.9, (0, 255, 0), 2)
        else:
            # Jika tidak ada emosi terdeteksi, tampilkan bounding box biasa
            cv2.rectangle(img, (x, y), (x + w, y + h), (0, 255, 0), 2)

    # Deteksi landmark dan tampilkan di jendela terpisah
    landmark_img = img.copy()
    for rect in dlib_faces:
        shape = landmark_predictor(gray, rect)
        shape = face_utils.shape_to_np(shape)

        # Gambar landmark pada wajah
        for (x, y) in shape:
            cv2.circle(landmark_img, (x, y), 2, (0, 255, 0), -1)

    # Tampilkan hasil landmark
    cv2.imshow('Landmark Detection', landmark_img)

    # Tampilkan hasil deteksi wajah dan emosi
    cv2.imshow('Emotion Detection', img)
    cv2.imshow('Gray Image', gray)
    cv2.imshow('Binary Image', binary)

    # Keluar jika tombol ESC ditekan
    k = cv2.waitKey(30) & 0xff
    if k == 27:
        break

# Lepaskan video capture dan tutup semua jendela
cap.release()
cv2.destroyAllWindows()
