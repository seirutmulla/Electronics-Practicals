#switch program to use a switch to be tested on a led or buzzer
import RPi.GPIO as GPIO
import time

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)
GPIO.setup(20, GPIO.IN, pull_up_down=GPIO.PUD_UP)
GPIO.setup(19, GPIO.OUT)

if __name__ =='__main__':
  try:
    while True:
      button_state = GPIO.input(20)
      if button_state == False:
        GPIO.output(19, True)
        print('Button Pressed...')
        time.sleep(0.2)
      else:
        GPIO.output(19, False)
  except KeyboardInterrupt:
    GPIO.cleanup()
