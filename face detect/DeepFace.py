import cv2
from fer import FER

# Membuka webcam
cap = cv2.VideoCapture(0)

# Membuat objek detector emosi
detector = FER()

while True:
    ret, frame = cap.read()
    if not ret:
        break

    # Mendeteksi emosi dari frame
    emotion, score = detector.top_emotion(frame)

    # Menampilkan emosi di layar
    if emotion:
        cv2.putText(frame, f'{emotion} ({score * 100:.2f}%)', (50, 50), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 2,
                    cv2.LINE_AA)

    # Menampilkan frame video
    cv2.imshow('Emotion Detector', frame)
    print(emotion, score)

    # Tekan 'q' untuk keluar
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Melepaskan kamera dan menutup semua jendela
cap.release()
cv2.destroyAllWindows()
