import RPi.GPIO as GPIO # Import GPIO package
import time # Import Time package for delay

LedPin = 5 # Connect LED to GPIO5

GPIO.setwarnings(False) # Disable Warnings
GPIO.setmode(GPIO.BCM) # Choose BCM Numbering for
GPIO GPIO.setup(LedPin, GPIO.OUT) # Set LedPin's mode is output
GPIO.output(LedPin, GPIO.HIGH) # Set LedPin high to turn on led

def blink():
  GPIO.output(LedPin, GPIO.HIGH) # Turn ON led
  time.sleep(1) # Delay of 1
  GPIO.output(LedPin, GPIO.LOW) # Turn off led
  time.sleep(1) # Delay of 1

def destroy():
  GPIO.output(LedPin, GPIO.LOW) # Turn off led
  GPIO.cleanup() # Release resource

if name == ' main ': # Program start from here
  try:
    while True:
      blink() # Call Blink Function
  except KeyboardInterrupt: # When 'Ctrl+C' is pressed, the program terminates
    destroy()
