import cv2
import os

# Inisialisasi objek VideoCapture
cap = cv2.VideoCapture(0)

# Nama folder untuk nyimpen foto
folder_name = 'captured_photos'

# Cek apakah folder udah ada, kalo belum create
if not os.path.exists(folder_name):
    os.makedirs(folder_name)

# Hitung jumlah file yang udah ada di folder, buat nentuin nama file baru
file_count = len([f for f in os.listdir(folder_name) if os.path.isfile(os.path.join(folder_name, f))])

while True:
    # Baca frame dari kamera
    ret, frame = cap.read()

    # Tampilin frame
    cv2.imshow('Frame', frame)

    # Nama file sesuai dengan urutan filenya
    file_name = f'photo_{file_count}.jpg'

    # Simpan frame ke dalam folder dengan nama file yang udah ditentuin
    cv2.imwrite(os.path.join(folder_name, file_name), frame)

    # Nambahin count buat nentuin nama file berikutnya
    file_count += 1

    # Tekan 'q' buat keluar dari loop
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Setelah keluar dari loop, release objek VideoCapture
cap.release()

# Hapus semua windows yang terbuka
cv2.destroyAllWindows()
