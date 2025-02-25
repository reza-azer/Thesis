import os
import cv2

# Inisialisasi Haar Cascade untuk deteksi wajah
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')

# Inisialisasi kamera
cap = cv2.VideoCapture(0)
brightness = 0  # Rentang -100 hingga 100
contrast = 0    # Rentang -100 hingga 100


def create_folders(base_folder):
    raw_folder = os.path.join(base_folder, 'Raw')
    rgb_folder = os.path.join(base_folder, 'RGB')
    gray_folder = os.path.join(base_folder, 'Grayscale')
    binary_folder = os.path.join(base_folder, 'Binary')
    data_folder = os.path.join(base_folder, 'Data')
    for folder in [raw_folder, rgb_folder, gray_folder, binary_folder, data_folder]:
        os.makedirs(folder, exist_ok=True)
    return raw_folder, rgb_folder, gray_folder, binary_folder, data_folder


# Input dari user
labels = input("Masukkan label data (pisahkan dengan koma, contoh: Neutral, Angry, Sad): ").split(',')
labels = [label.strip() for label in labels]
num_images = int(input("Berapa banyak gambar per label? "))
# inner_width = int(input("Masukkan lebar inner bounding box (default: 40 px kurang dari bounding box utama): "))

try:
    for label in labels:
        # Membuat folder penyimpanan untuk setiap label
        base_folder = label
        raw_folder, rgb_folder, gray_folder, binary_folder, data_folder = create_folders(base_folder)

        print(f"\nMengambil data untuk label '{label}'...")
        count = 0
        while count < num_images:
            ret, img = cap.read()
            frame = cv2.convertScaleAbs(img, alpha=(contrast / 50 + 1), beta=brightness)
            frame2 = cv2.convertScaleAbs(img, alpha=(contrast / 50 + 1), beta=brightness)

            if not ret:
                print("Gagal mendapatkan frame dari kamera.")
                break

            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            _, binary = cv2.threshold(gray, 75, 255, cv2.THRESH_BINARY)

            faces = face_cascade.detectMultiScale(gray, 1.1, 9)
            for (x, y, w, h) in faces:
                # Hitung inner bounding box
                # ratio = h / w  # Pertahankan rasio
                inner_w = w - 40
                inner_h = h - 70
                inner_x = x + 20
                inner_y = y + 30

                cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)
                cv2.rectangle(frame, (inner_x, inner_y), (inner_x + inner_w, inner_y + inner_h), (0, 0, 255), 2)

                # Crop inner bounding box
                inner_rgb = frame[inner_y:inner_y + inner_h, inner_x:inner_x + inner_w]
                inner_gray = gray[inner_y:inner_y + inner_h, inner_x:inner_x + inner_w]
                inner_binary = binary[inner_y:inner_y + inner_h, inner_x:inner_x + inner_w]
                inner_data = (inner_binary / 255).astype(int)
                

                # Tampilkan status
                cv2.putText(frame, f"{label} Captured : {count}/{num_images}", (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 0.7,
                            (0, 255, 0), 2)
                # Tampil pixel
                cv2.putText(frame, f'{inner_w} x {inner_h} pixels', (inner_x, inner_y + inner_h + 15),
                        cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255), 2)
                # Tunggu untuk capture
                if 60 <= inner_w <= 70 and 30 <= inner_h <= 40:  # 60 x 30 - 70 x 40 px
                    cv2.putText(frame, "in range, keep steady", (10, 400), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

                    key = cv2.waitKey(1) & 0xFF
                    if key == ord('c'):  # Capture data
                        # Simpan file
                        cv2.imwrite(os.path.join(raw_folder, f'{label}_{count}_raw.jpg'), frame2)
                        cv2.imwrite(os.path.join(rgb_folder, f'{label}_{count}_rgb.jpg'), inner_rgb)
                        cv2.imwrite(os.path.join(gray_folder, f'{label}_{count}_gray.jpg'), inner_gray)
                        cv2.imwrite(os.path.join(binary_folder, f'{label}_{count}_binary.jpg'), inner_binary)
                        with open(os.path.join(data_folder, f'{label}_{count}.txt'), 'w') as f:
                            for row in inner_data:
                                f.write(''.join(map(str, row)) + '\n')
                        count += 1

                    if count >= num_images:
                        break
                        



                # elif 91 <= inner_w or 51 <= inner_h:
                #     cv2.putText(frame, "don't get close", (10, 400), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 185, 255), 2)
                # elif inner_w <= 79 and inner_h <= 39:
                #     cv2.putText(frame, "you are too far", (10, 400), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 185, 255), 2)
           # cv2.imshow('biner', inner_binary)
            # tampil visual
            cv2.imshow('Frame', frame)

            # Panel Input
            key = cv2.waitKey(1) & 0xFF
            if key == ord('w'):  # Tekan 'w' untuk menambah kecerahan
                brightness += 10
                print(f"Kecerahan: {brightness}")
            elif key == ord('s'):  # Tekan 's' untuk mengurangi kecerahan
                brightness -= 10
                print(f"Kecerahan: {brightness}")
            elif key == ord('a'):  # Tekan 'a' untuk mengurangi kontras
                contrast -= 10
                print(f"Kontras: {contrast}")
            elif key == ord('d'):  # Tekan 'd' untuk menambah kontras
                contrast += 10
                print(f"Kontras: {contrast}")

            key = cv2.waitKey(30) & 0xFF
            if key == 27:
                break

        print(f"Data untuk label '{label}' selesai diambil.")

finally:
    cap.release()
    cv2.destroyAllWindows()
