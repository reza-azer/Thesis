import RPi.GPIO as GPIO
import time

PWML = 17
PWMR = 27

#setup GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setup(PWML, GPIO.OUT)
GPIO.setup(PWMR, GPIO.OUT)

#Inisialisasi PWM dengan frekuensi 1000Hz
pwm_L = GPIO.PWM(PWML, 1000)
pwm_R = GPIO.PWM(PWMR, 1000)

pwm_L.start(0)
pwm_R.start(0)

try:
    while True:
        #Motor Maju (PWML HI, PWMR LOW)
        print("Motor Maju...")
        for speed in range(0, 101, 20): #0 - 100% duty cycle
            pwm_L.ChangeDutyCycle(speed)
            pwm_R.ChangeDutyCycle(0)
            print(f"Speed:{speed}%")
            time.sleep(1)

        #perlahan berhenti
        for speed in range (100,-1, -20):
            pwm_L.ChangeDutyCycle(speed)
            pwm_R.ChangeDutyCycle(0)
            print(f"Speed:{speed}%")
            time.sleep(1)

        #Jeda
        pwm_L.ChangeDutyCycle(0)
        pwm_R.ChangeDutyCycle(0)
        time.sleep(2)

        #Motor mundur (PWMR HI, PWML LOW)
        print("Motor Mundur...")
        for speed in range (0, 101, 20):
            pwm_L.ChangeDutyCycle(0)
            pwm_R.ChangeDutyCycle(speed)
            print(f"Speed:{speed}%")
            time.sleep(1)

        #perlahan berhenti
        for speed in range (100, -1, -20):
            pwm_L.ChangeDutyCycle(0)
            pwm_R.ChangeDutyCycle(speed)
            print(f"Speed:{speed}%")
            time.sleep(1)

        #Jeda
        pwm_L.ChangeDutyCycle(0)
        pwm_R.ChangeDutyCycle(0)
        time.sleep(2)

except KeyboardInterrupt:
    print("Stopping...")
finally:
    pwm_L.stop()
    pwm_R.stop()
    GPIO.cleanup()