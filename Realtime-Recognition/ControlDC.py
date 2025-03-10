import pigpio
import time

pi = pigpio.pi()

# Pin definitions
RPWM = [20, 19, 6, 23]
LPWM = [26, 16, 12, 22]

# GPIO setup
for pin in RPWM + LPWM:
    pi.set_mode(pin, pigpio.OUTPUT)


def set_pwm(pin_list, speed, torque):
    for pin in pin_list:
        pi.set_PWM_frequency(pin, speed)
        pi.set_PWM_dutycycle(pin, torque)

# Rotate function
def rotate(speed, torque):
    if torque >= 0:
        set_pwm(RPWM, speed, torque)
    else:
        set_pwm(LPWM, abs(speed), abs(torque))

# Forward function
def forward(speed, torque):
    if torque >= 0:
        set_pwm([RPWM[1], LPWM[3]], speed, torque)
    else:
        set_pwm([RPWM[3], LPWM[1]], abs(speed), abs(torque))

# Turn function
def turn(speed, torque):
    if torque >= 0:
        set_pwm([RPWM[0], LPWM[2]], speed, torque)
    else:
        set_pwm([RPWM[2], LPWM[0]], abs(speed), abs(torque))

# Diagonal Y function
def diagy(speed, torque):
    if torque >= 0:
        set_pwm([RPWM[0], RPWM[1], LPWM[2], LPWM[3]], speed, torque)
    else:
        set_pwm([RPWM[2], RPWM[3], LPWM[0], LPWM[1]], abs(speed), abs(torque))

# Diagonal X function
def diagx(speed, torque):
    if torque >= 0:
        set_pwm([RPWM[1], RPWM[2], LPWM[0], LPWM[3]], speed, torque)
    else:
        set_pwm([RPWM[0], RPWM[3], LPWM[1], LPWM[2]], abs(speed), abs(torque))

# Stop function
def stop():
    set_pwm(RPWM + LPWM, 0, 0)
'''Main Function'''
# Robot direction control functions
def maju(kecepatan, torsi):
    forward(kecepatan, torsi)

def mundur(kecepatan, torsi):
    forward(kecepatan, -torsi)

def majutans(kecepatan, torsi):
    forward(kecepatan, torsi)
    time.sleep(0.1)
    stop()

def mundurtans(kecepatan, torsi):
    forward(kecepatan, -torsi)
    time.sleep(0.1)
    stop()
    time.sleep(0.2)

def kanan(kecepatan, torsi):
    turn(kecepatan, torsi)

def kiri(kecepatan, torsi):
    turn(kecepatan, -torsi)

def cw(kecepatan, torsi):
    rotate(kecepatan, torsi)

def cc(kecepatan, torsi):
    rotate(kecepatan, -torsi)

def maju_x(kecepatan, torsi):
    diagy(kecepatan, torsi)

def mundur_x(kecepatan, torsi):
    diagy(kecepatan, -torsi)

def kiri_x(kecepatan, torsi):
    diagx(kecepatan, torsi)

def kanan_x(kecepatan, torsi):
    diagx(kecepatan, -torsi)    
