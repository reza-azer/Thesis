import cv2
import pigpio

# Inisialisasi pigpio
pi = pigpio.pi()

# Tentukan pin servo
servo_x_pin = 18
servo_y_pin = 17

# Atur posisi awal servo
servo_x_pos = 1300
servo_y_pos = 700

pi.set_servo_pulsewidth(servo_x_pin, servo_x_pos)
pi.set_servo_pulsewidth(servo_y_pin, servo_y_pos)


def set_servo_position(pin, position):
    pi.set_servo_pulsewidth(pin, position)

def track_face(frame, x,y,w,h ):
    global servo_x_pos, servo_y_pos

    cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)
    center_x = x + w // 2
    center_y = y + h // 2

    # Dead zone thresholds
    dead_zone = 35

    # Gerakkan servo x
    if abs(center_x - frame.shape[1] // 2) > dead_zone:
        if center_x < frame.shape[1] // 2:
            servo_x_pos += 10
        else:
            servo_x_pos -= 10
    # Gerakkan servo y
    if abs(center_y - frame.shape[0] // 2) > dead_zone:
        if center_y < frame.shape[0] // 2:
            servo_y_pos -= 10
        else:
            servo_y_pos += 10
            '''
            # Gerakkan servo x
            if center_x < frame.shape[1] // 2:
                servo_x_pos += 5
            else:
                servo_x_pos -= 5

            # Gerakkan servo y
            if center_y < frame.shape[0] // 2:
                servo_y_pos -= 5
            else:
                servo_y_pos += 5
            '''
            # Batasi posisi servo
    servo_x_pos = max(700, min(2000, servo_x_pos))
    servo_y_pos = max(500, min(2000, servo_y_pos))

    set_servo_position(servo_x_pin, servo_x_pos)
    set_servo_position(servo_y_pin, servo_y_pos)

    return

