import cv2
import pigpio
import time

# Inisialisasi pigpio
pi = pigpio.pi()

# Tentukan pin servo
servo_x_pin = 18
servo_y_pin = 17

# Atur posisi awal servo
servo_x_pos = 1600
servo_y_pos = 1600

pi.set_servo_pulsewidth(servo_x_pin, servo_x_pos)
pi.set_servo_pulsewidth(servo_y_pin, servo_y_pos)


def smooth_move(pin, current_pos, target_pos, step=5, delay=0.01):
    while abs(current_pos - target_pos) > step:
        current_pos += step if target_pos > current_pos else -step
        pi.set_servo_pulsewidth(pin, current_pos)
        time.sleep(delay)
    pi.set_servo_pulsewidth(pin, target_pos)

def track_face(frame, x, y, w, h):
    global servo_x_pos, servo_y_pos
    center_x = x + w // 2
    center_y = y + h // 2
    dead_zone = 35

    if abs(center_x - frame.shape[1] // 2) > dead_zone:
        servo_x_pos += -10 if center_x < frame.shape[1] // 2 else 10
    if abs(center_y - frame.shape[0] // 2) > dead_zone:
        servo_y_pos += 10 if center_y < frame.shape[0] // 2 else -10

    servo_x_pos = max(800, min(2400, servo_x_pos))
    servo_y_pos = max(800, min(2400, servo_y_pos))

    smooth_move(servo_x_pin, servo_x_pos, servo_x_pos)
    smooth_move(servo_y_pin, servo_y_pos, servo_y_pos)
