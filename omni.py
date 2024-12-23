import pigpio
import time

# Initialize pigpio library
pi = pigpio.pi()

# Penomoran pin
RPWM_1 = 27  # GPIO27
LPWM_1 = 22  # GPIO22
RPWM_2 = 23  # GPIO23
LPWM_2 = 24  # GPIO24
RPWM_3 = 19  # GPIO19
LPWM_3 = 26  # GPIO26
RPWM_4 = 20  # GPIO20
LPWM_4 = 21  # GPIO21

# Pengaturan GPIO
pi.set_mode(RPWM_1, pigpio.OUTPUT)
pi.set_mode(LPWM_1, pigpio.OUTPUT)
pi.set_mode(RPWM_2, pigpio.OUTPUT)
pi.set_mode(LPWM_2, pigpio.OUTPUT)
pi.set_mode(RPWM_3, pigpio.OUTPUT)
pi.set_mode(LPWM_3, pigpio.OUTPUT)
pi.set_mode(RPWM_4, pigpio.OUTPUT)
pi.set_mode(LPWM_4, pigpio.OUTPUT)

def set_motor(speed):
    if speed > 0:
        pi.set_PWM_dutycycle(RPWM_1, speed)
        pi.set_PWM_dutycycle(LPWM_1, 0)
        pi.set_PWM_dutycycle(RPWM_2, speed)
        pi.set_PWM_dutycycle(LPWM_2, 0)
        pi.set_PWM_dutycycle(RPWM_3, speed)
        pi.set_PWM_dutycycle(LPWM_3, 0)
        pi.set_PWM_dutycycle(RPWM_4, speed)
        pi.set_PWM_dutycycle(LPWM_4, 0)
    elif speed < 0:
        pi.set_PWM_dutycycle(RPWM_1, 0)  
        pi.set_PWM_dutycycle(LPWM_1, abs(speed))
        pi.set_PWM_dutycycle(RPWM_2, 0)  
        pi.set_PWM_dutycycle(LPWM_2, abs(speed))
        pi.set_PWM_dutycycle(RPWM_3, 0)  
        pi.set_PWM_dutycycle(LPWM_3, abs(speed))
        pi.set_PWM_dutycycle(RPWM_4, 0)  
        pi.set_PWM_dutycycle(LPWM_4, abs(speed))
    else:
        pi.set_PWM_dutycycle(RPWM_1, 0)
        pi.set_PWM_dutycycle(LPWM_1, 0)
        pi.set_PWM_dutycycle(RPWM_2, 0)
        pi.set_PWM_dutycycle(LPWM_2, 0)
        pi.set_PWM_dutycycle(RPWM_3, 0)
        pi.set_PWM_dutycycle(LPWM_3, 0)
        pi.set_PWM_dutycycle(RPWM_4, 0)
        pi.set_PWM_dutycycle(LPWM_4, 0)

while True:
    print("1. maju")
    print("2. mundur")
    print("etc. program close")
    pilihan = input(int("masukkan pilihan : "))
    
    if pilihan == 1:
        # Motor maju dengan kecepatan 50%
        set_motor(128)
        time.sleep(5)
        set_motor(0)
    elif pilihan == 2:
        # Motor mundur dengan kecepatan 50%
        set_motor(-128)
        time.sleep(5)
        set_motor(0)
    else:
        print('terima kasih')
        break

# Pembersihan GPIO
pi.stop()