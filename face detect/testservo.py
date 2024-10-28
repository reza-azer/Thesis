import RPi.GPIO as GPIO
import time

# Set up GPIO mode
GPIO.setmode(GPIO.BCM)

# Set up the servo pins as outputs
servo_pin_1 = 17  # Change this to the pin connected to your first servo
servo_pin_2 = 27  # Change this to the pin connected to your second servo
GPIO.setup(servo_pin_1, GPIO.OUT)
GPIO.setup(servo_pin_2, GPIO.OUT)

# Set up the PWM frequency (50Hz is typical for servos)
pwm_frequency = 100  # Increased frequency for smoother movement
pwm_1 = GPIO.PWM(servo_pin_1, pwm_frequency)
pwm_2 = GPIO.PWM(servo_pin_2, pwm_frequency)

# Set the initial duty cycles (0-100) to set the servos to their neutral positions
neutral_duty_cycle_1 = 7.5  # Adjust this value based on your first servo's specifications
neutral_duty_cycle_2 = 7.5  # Adjust this value based on your second servo's specifications
pwm_1.start(neutral_duty_cycle_1)
pwm_2.start(neutral_duty_cycle_2)

try:
    while True:
        # Move the servos from 0 to 180 degrees
        for i in range(181):
            duty_cycle_1 = 5.0 + (i * 0.05)  # Move from 5.0 to 10.0 in 180 steps
            duty_cycle_2 = 10.0 - (i * 0.05)  # Move from 10.0 to 5.0 in 180 steps
            pwm_1.ChangeDutyCycle(duty_cycle_1)
            pwm_2.ChangeDutyCycle(duty_cycle_2)
            time.sleep(0.01)  # Decreased sleep time for smoother movement

        # Move the servos back to their neutral positions
        pwm_1.ChangeDutyCycle(neutral_duty_cycle_1)
        pwm_2.ChangeDutyCycle(neutral_duty_cycle_2)
        time.sleep(1)

        # Move the servos from 180 to 0 degrees
        for i in range(180, -1, -1):
            duty_cycle_1 = 5.0 + (i * 0.05)  # Move from 10.0 to 5.0 in 180 steps
            duty_cycle_2 = 10.0 - (i * 0.05)  # Move from 5.0 to 10.0 in 180 steps
            pwm_1.ChangeDutyCycle(duty_cycle_1)
            pwm_2.ChangeDutyCycle(duty_cycle_2)
            time.sleep(0.01)  # Decreased sleep time for smoother movement

except KeyboardInterrupt:
    # Clean up and stop the PWM signals
    pwm_1.stop()
    pwm_2.stop()
    GPIO.cleanup()