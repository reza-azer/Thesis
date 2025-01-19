import cv2
import time
import threading
import ControlDC as dp
import ControlServo as ft

face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')
cap = cv2.VideoCapture(0)
cap.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 480)

brightness = 20  # Range: -100 to 100
contrast = 0    # Range: -100 to 100
inner_x = 0
mula = 1

def adjust_frame(img, contrast, brightness):
    """Adjust brightness and contrast of the frame."""
    return cv2.convertScaleAbs(img, alpha=(contrast / 50 + 1), beta=brightness)

def detect_faces(frame):
    """Detect faces and return their bounding boxes."""
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    return face_cascade.detectMultiScale(gray, scaleFactor=1.1, minNeighbors=9)

def draw_rectangles(frame, faces):
    """Draw rectangles and calculate inner rectangle coordinates."""
    for (x, y, w, h) in faces:
        inner_w, inner_h = w - 40, h - 80
        inner_x, inner_y = x + 20, y + 30
        cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)
        cv2.rectangle(frame, (inner_x, inner_y), (inner_x + inner_w, inner_y + inner_h), (0, 0, 255), 2)
        return inner_w, inner_h, inner_x, inner_y

def control_motors(inner_w, inner_h, x, y, frame, w, h):
    """Control motors based on detected face position."""
    if 70 <= inner_w <= 80 and 30 <= inner_h <= 40:
        ft.track_face(frame, x, y, w, h)
        cv2.putText(frame, "in range, keep steady", (10, 400), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
    elif inner_w <= 49:
        threading.Thread(target=dp.maju, args=(10000, 70)).start()
        cv2.putText(frame, "too far", (10, 400), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255), 2)
    elif 101 <= inner_w:
        threading.Thread(target=dp.mundur, args=(10000, 70)).start()
        cv2.putText(frame, "too close", (10, 400), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255), 2)
    if x <= 80:
        threading.Thread(target=dp.cc, args=(1000, 30)).start()
    elif x + w >= 500:
        threading.Thread(target=dp.cw, args=(1000, 30)).start()

def main():
    global inner_x, mula

    while True:
        ret, frame = cap.read()
        if not ret:
            print("Failed to capture frame from camera.")
            break

        frame = adjust_frame(frame, contrast, brightness)
        faces = detect_faces(frame)

        if len(faces) > 0:
            inner_w, inner_h, inner_x, inner_y = draw_rectangles(frame, faces)
            control_motors(inner_w, inner_h, inner_x, inner_y, frame, inner_w, inner_h)
        else:
            if mula == 0:
                dp.stop()
                time.sleep(1)
                mula += 1
            elif mula == 1:
                dp.mundur(10000, 70)
                time.sleep(0.7)
                dp.stop()
                mula += 1
            else:
                dp.stop()

        cv2.imshow('Frame', frame)
        key = cv2.waitKey(1) & 0xFF
        if key == 27:  # Exit on ESC key
            dp.stop()
            break

    cap.release()
    cv2.destroyAllWindows()
    dp.pi.stop()

if __name__ == "__main__":
    main()
