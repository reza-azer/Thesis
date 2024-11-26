import cv2
import pigpio

# Inisialisasi pigpio
pi = pigpio.pi()

# Tentukan pin servo
servo_x_pin = 17
servo_y_pin = 18

# Atur posisi awal servo
servo_x_pos = 1500
servo_y_pos = 1500

pi.set_servo_pulsewidth(servo_x_pin, servo_x_pos)
pi.set_servo_pulsewidth(servo_y_pin, servo_y_pos)

# Inisialisasi OpenCV
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')
cap = cv2.VideoCapture(0)

def set_servo_position(pin, position):
    pi.set_servo_pulsewidth(pin, position)

def track_face():
    global servo_x_pos, servo_y_pos
    while True:
        ret, frame = cap.read()
        gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
        faces = face_cascade.detectMultiScale(gray, 1.1, 4)

        for (x, y, w, h) in faces:
            center_x = x + w // 2
            center_y = y + h // 2

            # Gerakkan servo x
            if center_x < frame.shape[1] // 2:
                servo_x_pos -= 10
            else:
                servo_x_pos += 10

            # Gerakkan servo y
            if center_y < frame.shape[0] // 2:
                servo_y_pos -= 10
            else:
                servo_y_pos += 10

            # Batasi posisi servo
            servo_x_pos = max(1000, min(2000, servo_x_pos))
            servo_y_pos = max(1000, min(2000, servo_y_pos))

            set_servo_position(servo_x_pin, servo_x_pos)
            set_servo_position(servo_y_pin, servo_y_pos)

        cv2.imshow('Face Tracking', frame)

        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

track_face()

cap.release()
cv2.destroyAllWindows()
pi.stop()
