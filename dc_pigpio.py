import pigpio


pi = pigpio.pi()

# Penomoran pin
RPWM_1 = 20
LPWM_1 = 26
RPWM_4 = 23
LPWM_4 = 22
RPWM_2 = 19
LPWM_2 = 16
RPWM_3 = 6
LPWM_3 = 12

# Pengaturan GPIO
pi.set_mode(RPWM_1, pigpio.OUTPUT)
pi.set_mode(LPWM_1, pigpio.OUTPUT)
pi.set_mode(RPWM_2, pigpio.OUTPUT)
pi.set_mode(LPWM_2, pigpio.OUTPUT)
pi.set_mode(RPWM_3, pigpio.OUTPUT)
pi.set_mode(LPWM_3, pigpio.OUTPUT)
pi.set_mode(RPWM_4, pigpio.OUTPUT)
pi.set_mode(LPWM_4, pigpio.OUTPUT)

# Mengatur arah L/RPWM
def rotate(speed, torque):
    if torque > 0:
        pi.set_PWM_frequency(RPWM_1, speed)
        pi.set_PWM_frequency(RPWM_2, speed)
        pi.set_PWM_frequency(RPWM_3, speed)
        pi.set_PWM_frequency(RPWM_4, speed)

        pi.set_PWM_dutycycle(RPWM_1, torque)
        pi.set_PWM_dutycycle(RPWM_2, torque)
        pi.set_PWM_dutycycle(RPWM_3, torque)
        pi.set_PWM_dutycycle(RPWM_4, torque)

        pi.set_PWM_frequency(LPWM_1, 0)
        pi.set_PWM_frequency(LPWM_2, 0)
        pi.set_PWM_frequency(LPWM_3, 0)
        pi.set_PWM_frequency(LPWM_4, 0)

        pi.set_PWM_dutycycle(LPWM_1, 0)
        pi.set_PWM_dutycycle(LPWM_2, 0)
        pi.set_PWM_dutycycle(LPWM_3, 0)
        pi.set_PWM_dutycycle(LPWM_4, 0)
    elif torque < 0:
        pi.set_PWM_frequency(RPWM_1, 0)
        pi.set_PWM_frequency(RPWM_2, 0)
        pi.set_PWM_frequency(RPWM_3, 0)
        pi.set_PWM_frequency(RPWM_4, 0)

        pi.set_PWM_dutycycle(RPWM_1, 0)
        pi.set_PWM_dutycycle(RPWM_2, 0)
        pi.set_PWM_dutycycle(RPWM_3, 0)
        pi.set_PWM_dutycycle(RPWM_4, 0)

        pi.set_PWM_frequency(LPWM_1, abs(speed))
        pi.set_PWM_frequency(LPWM_2, abs(speed))
        pi.set_PWM_frequency(LPWM_3, abs(speed))
        pi.set_PWM_frequency(LPWM_4, abs(speed))

        pi.set_PWM_dutycycle(LPWM_1, abs(torque))
        pi.set_PWM_dutycycle(LPWM_2, abs(torque))
        pi.set_PWM_dutycycle(LPWM_3, abs(torque))
        pi.set_PWM_dutycycle(LPWM_4, abs(torque))
    else:
        pi.set_PWM_dutycycle(RPWM_1, 0)
        pi.set_PWM_dutycycle(LPWM_1, 0)
        pi.set_PWM_dutycycle(RPWM_2, 0)
        pi.set_PWM_dutycycle(LPWM_2, 0)
        pi.set_PWM_dutycycle(RPWM_3, 0)
        pi.set_PWM_dutycycle(LPWM_3, 0)
        pi.set_PWM_dutycycle(RPWM_4, 0)
        pi.set_PWM_dutycycle(LPWM_4, 0)

def forward (speed, torque):
    if torque > 0:
        pi.set_PWM_frequency(RPWM_1, 0)
        pi.set_PWM_frequency(RPWM_2, speed)
        pi.set_PWM_frequency(RPWM_3, 0)
        pi.set_PWM_frequency(RPWM_4, 0)

        pi.set_PWM_dutycycle(RPWM_1, 0)
        pi.set_PWM_dutycycle(RPWM_2, torque)
        pi.set_PWM_dutycycle(RPWM_3, 0)
        pi.set_PWM_dutycycle(RPWM_4, 0)

        pi.set_PWM_frequency(LPWM_1, 0)
        pi.set_PWM_frequency(LPWM_2, 0)
        pi.set_PWM_frequency(LPWM_3, 0)
        pi.set_PWM_frequency(LPWM_4, speed)

        pi.set_PWM_dutycycle(LPWM_1, 0)
        pi.set_PWM_dutycycle(LPWM_2, 0)
        pi.set_PWM_dutycycle(LPWM_3, 0)
        pi.set_PWM_dutycycle(LPWM_4, torque)
    elif torque < 0:
        pi.set_PWM_frequency(RPWM_1, 0)
        pi.set_PWM_frequency(RPWM_2, 0)
        pi.set_PWM_frequency(RPWM_3, 0)
        pi.set_PWM_frequency(RPWM_4, abs(speed))

        pi.set_PWM_dutycycle(RPWM_1, 0)
        pi.set_PWM_dutycycle(RPWM_2, 0)
        pi.set_PWM_dutycycle(RPWM_3, 0)
        pi.set_PWM_dutycycle(RPWM_4, abs(torque))

        pi.set_PWM_frequency(LPWM_1, 0)
        pi.set_PWM_frequency(LPWM_2, abs(speed))
        pi.set_PWM_frequency(LPWM_3, 0)
        pi.set_PWM_frequency(LPWM_4, 0)

        pi.set_PWM_dutycycle(LPWM_1, 0)
        pi.set_PWM_dutycycle(LPWM_2, abs(torque))
        pi.set_PWM_dutycycle(LPWM_3, 0)
        pi.set_PWM_dutycycle(LPWM_4, 0)
    else:
        pi.set_PWM_dutycycle(RPWM_1, 0)
        pi.set_PWM_dutycycle(LPWM_1, 0)
        pi.set_PWM_dutycycle(RPWM_2, 0)
        pi.set_PWM_dutycycle(LPWM_2, 0)
        pi.set_PWM_dutycycle(RPWM_3, 0)
        pi.set_PWM_dutycycle(LPWM_3, 0)
        pi.set_PWM_dutycycle(RPWM_4, 0)
        pi.set_PWM_dutycycle(LPWM_4, 0)
def turn (speed, torque):
    if torque > 0:
        pi.set_PWM_frequency(RPWM_1, speed)
        pi.set_PWM_frequency(RPWM_2, 0)
        pi.set_PWM_frequency(RPWM_3, 0)
        pi.set_PWM_frequency(RPWM_4, 0)

        pi.set_PWM_dutycycle(RPWM_1, torque)
        pi.set_PWM_dutycycle(RPWM_2, 0)
        pi.set_PWM_dutycycle(RPWM_3, 0)
        pi.set_PWM_dutycycle(RPWM_4, 0)

        pi.set_PWM_frequency(LPWM_1, 0)
        pi.set_PWM_frequency(LPWM_2, 0)
        pi.set_PWM_frequency(LPWM_3, speed)
        pi.set_PWM_frequency(LPWM_4, 0)

        pi.set_PWM_dutycycle(LPWM_1, 0)
        pi.set_PWM_dutycycle(LPWM_2, 0)
        pi.set_PWM_dutycycle(LPWM_3, torque)
        pi.set_PWM_dutycycle(LPWM_4, 0)
    elif torque < 0:
        pi.set_PWM_frequency(RPWM_1, 0)
        pi.set_PWM_frequency(RPWM_2, 0)
        pi.set_PWM_frequency(RPWM_3, abs(speed))
        pi.set_PWM_frequency(RPWM_4, 0)

        pi.set_PWM_dutycycle(RPWM_1, 0)
        pi.set_PWM_dutycycle(RPWM_2, 0)
        pi.set_PWM_dutycycle(RPWM_3, abs(torque))
        pi.set_PWM_dutycycle(RPWM_4, 0)

        pi.set_PWM_frequency(LPWM_1, abs(speed))
        pi.set_PWM_frequency(LPWM_2, 0)
        pi.set_PWM_frequency(LPWM_3, 0)
        pi.set_PWM_frequency(LPWM_4, 0)

        pi.set_PWM_dutycycle(LPWM_1, abs(torque))
        pi.set_PWM_dutycycle(LPWM_2, 0)
        pi.set_PWM_dutycycle(LPWM_3, 0)
        pi.set_PWM_dutycycle(LPWM_4, 0)
    else:
        pi.set_PWM_dutycycle(RPWM_1, 0)
        pi.set_PWM_dutycycle(LPWM_1, 0)
        pi.set_PWM_dutycycle(RPWM_2, 0)
        pi.set_PWM_dutycycle(LPWM_2, 0)
        pi.set_PWM_dutycycle(RPWM_3, 0)
        pi.set_PWM_dutycycle(LPWM_3, 0)
        pi.set_PWM_dutycycle(RPWM_4, 0)
        pi.set_PWM_dutycycle(LPWM_4, 0)
def diagy(speed, torque):
    if torque > 0:
        pi.set_PWM_frequency(RPWM_1, speed)
        pi.set_PWM_frequency(RPWM_2, speed)
        pi.set_PWM_frequency(RPWM_3, 0)
        pi.set_PWM_frequency(RPWM_4, 0)

        pi.set_PWM_dutycycle(RPWM_1, torque)
        pi.set_PWM_dutycycle(RPWM_2, torque)
        pi.set_PWM_dutycycle(RPWM_3, 0)
        pi.set_PWM_dutycycle(RPWM_4, 0)

        pi.set_PWM_frequency(LPWM_1, 0)
        pi.set_PWM_frequency(LPWM_2, 0)
        pi.set_PWM_frequency(LPWM_3, speed)
        pi.set_PWM_frequency(LPWM_4, speed)

        pi.set_PWM_dutycycle(LPWM_1, 0)
        pi.set_PWM_dutycycle(LPWM_2, 0)
        pi.set_PWM_dutycycle(LPWM_3, torque)
        pi.set_PWM_dutycycle(LPWM_4, torque)
    elif speed < 0:
        pi.set_PWM_frequency(RPWM_1, 0)
        pi.set_PWM_frequency(RPWM_2, 0)
        pi.set_PWM_frequency(RPWM_3, abs(speed))
        pi.set_PWM_frequency(RPWM_4, abs(speed))

        pi.set_PWM_dutycycle(RPWM_1, 0)
        pi.set_PWM_dutycycle(RPWM_2, 0)
        pi.set_PWM_dutycycle(RPWM_3, abs(torque))
        pi.set_PWM_dutycycle(RPWM_4, abs(torque))

        pi.set_PWM_frequency(LPWM_1, abs(speed))
        pi.set_PWM_frequency(LPWM_2, abs(speed))
        pi.set_PWM_frequency(LPWM_3, 0)
        pi.set_PWM_frequency(LPWM_4, 0)

        pi.set_PWM_dutycycle(LPWM_1, abs(torque))
        pi.set_PWM_dutycycle(LPWM_2, abs(torque))
        pi.set_PWM_dutycycle(LPWM_3, 0)
        pi.set_PWM_dutycycle(LPWM_4, 0)
    else:
        pi.set_PWM_dutycycle(RPWM_1, 0)
        pi.set_PWM_dutycycle(LPWM_1, 0)
        pi.set_PWM_dutycycle(RPWM_2, 0)
        pi.set_PWM_dutycycle(LPWM_2, 0)
        pi.set_PWM_dutycycle(RPWM_3, 0)
        pi.set_PWM_dutycycle(LPWM_3, 0)
        pi.set_PWM_dutycycle(RPWM_4, 0)
        pi.set_PWM_dutycycle(LPWM_4, 0)
def diagx(speed, torque):
    if torque > 0:
        pi.set_PWM_frequency(RPWM_1, 0)
        pi.set_PWM_frequency(RPWM_2, speed)
        pi.set_PWM_frequency(RPWM_3, speed)
        pi.set_PWM_frequency(RPWM_4, 0)

        pi.set_PWM_dutycycle(RPWM_1, 0)
        pi.set_PWM_dutycycle(RPWM_2, torque)
        pi.set_PWM_dutycycle(RPWM_3, torque)
        pi.set_PWM_dutycycle(RPWM_4, 0)

        pi.set_PWM_frequency(LPWM_1, speed)
        pi.set_PWM_frequency(LPWM_2, 0)
        pi.set_PWM_frequency(LPWM_3, 0)
        pi.set_PWM_frequency(LPWM_4, speed)

        pi.set_PWM_dutycycle(LPWM_1, torque)
        pi.set_PWM_dutycycle(LPWM_2, 0)
        pi.set_PWM_dutycycle(LPWM_3, 0)
        pi.set_PWM_dutycycle(LPWM_4, torque)
    elif torque < 0:
        pi.set_PWM_frequency(RPWM_1, abs(speed))
        pi.set_PWM_frequency(RPWM_2, 0)
        pi.set_PWM_frequency(RPWM_3, 0)
        pi.set_PWM_frequency(RPWM_4, abs(speed))

        pi.set_PWM_dutycycle(RPWM_1, abs(torque))
        pi.set_PWM_dutycycle(RPWM_2, 0)
        pi.set_PWM_dutycycle(RPWM_3, 0)
        pi.set_PWM_dutycycle(RPWM_4, abs(torque))

        pi.set_PWM_frequency(LPWM_1, 0)
        pi.set_PWM_frequency(LPWM_2, abs(speed))
        pi.set_PWM_frequency(LPWM_3, abs(speed))
        pi.set_PWM_frequency(LPWM_4, 0)

        pi.set_PWM_dutycycle(LPWM_1, 0)
        pi.set_PWM_dutycycle(LPWM_2, abs(torque))
        pi.set_PWM_dutycycle(LPWM_3, abs(torque))
        pi.set_PWM_dutycycle(LPWM_4, 0)
    else:
        pi.set_PWM_dutycycle(RPWM_1, 0)
        pi.set_PWM_dutycycle(LPWM_1, 0)
        pi.set_PWM_dutycycle(RPWM_2, 0)
        pi.set_PWM_dutycycle(LPWM_2, 0)
        pi.set_PWM_dutycycle(RPWM_3, 0)
        pi.set_PWM_dutycycle(LPWM_3, 0)
        pi.set_PWM_dutycycle(RPWM_4, 0)
        pi.set_PWM_dutycycle(LPWM_4, 0)

# Mengatur direksi Robot
def maju(kecepatan, torsi):
    forward(kecepatan, torsi)
def mundur(kecepatan, torsi):
    forward(kecepatan, -torsi)
def kanan(kecepatan, torsi):
    turn(kecepatan, torsi)
def kiri(kecepatan, torsi):
    turn(kecepatan, -torsi)
def cw(kecepatan, torsi):
    rotate(kecepatan, torsi)
def cc(kecepatan, torsi):
    rotate (kecepatan, -torsi)
def maju_x(kecepatan, torsi):
    diagy(kecepatan, torsi)
def mundur_x(kecepatan, torsi) :
    diagy(kecepatan, -torsi)
def kiri_x(kecepatan, torsi):
    diagx(kecepatan, torsi)
def kanan_x(kecepatan, torsi):
    diagx(kecepatan, -torsi)
def stop():
    rotate(0,0)

