import dlib
from imutils import face_utils
import cv2
cap = cv2.VideoCapture(0)

# Inisialisasi detektor landmark dlib
predictor_path = "shape_predictor_68_face_landmarks.dat"
face_detector = dlib.get_frontal_face_detector()
landmark_predictor = dlib.shape_predictor(predictor_path)
while True:
    _, img = cap.read()  # Main window
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)  # Grayscale image
    dlib_faces = face_detector(gray, 0)  # Untuk deteksi landmark
    # Deteksi landmark dan tampilkan di jendela terpisah
    landmark_img = img.copy()
    for rect in dlib_faces:
        shape = landmark_predictor(gray, rect)
        shape = face_utils.shape_to_np(shape)

        # Gambar landmark pada wajah
        for (x, y) in shape:
            cv2.circle(landmark_img, (x, y), 2, (0, 255, 0), -1)
    cv2.imshow('Landmark Detection', landmark_img)
    # Keluar jika tombol ESC ditekan
    k = cv2.waitKey(30) & 0xff
    if k == 27:
        break

# Lepaskan video capture dan tutup semua jendela
cap.release()
cv2.destroyAllWindows()