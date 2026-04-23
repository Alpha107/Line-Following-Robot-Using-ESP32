from machine import Pin, ADC , PWM
from time import sleep
from DCMotor import DCMotor 

line1 = ADC(Pin(34))
line2 = ADC(Pin(35))

frequency = 15000       
pin1 = Pin(22, Pin.OUT)    
pin2 = Pin(21, Pin.OUT)  
pin3 = Pin(19, Pin.OUT)    
pin4 = Pin(18, Pin.OUT)  
enable = PWM(Pin(23), frequency)  
enable1 = PWM(Pin(5), frequency)
dc_motor = DCMotor(pin1, pin2, enable)      
dc_motor = DCMotor(pin1, pin2, enable, 350, 1023)
dc_motor1 = DCMotor(pin3, pin4, enable1)      
dc_motor1 = DCMotor(pin3, pin4, enable1, 350, 1023)

while True:
  line1_value = line1.read()
  line2_value = line2.read()
  print('motor1=',line1_value)
  print('motor2=',line2_value)
  if (line1_value < 1000) : 
    dc_motor.forward(10) # Turn <strong>right</strong>
    dc_motor1.forward(90)
  if (line2_value < 1000) :
    dc_motor1.forward(10) # Turn <strong>left</strong>
    dc_motor.forward(90)
  if (line1_value > 1000) and (line2_value > 1000) :
    dc_motor.forward(75) # Move <strong>forward</strong>
    dc_motor1.forward(75)
    sleep(0.1)
    dc_motor.forward(10)
    dc_motor1.forward(10)
    sleep(0.2)
  if (line1_value < 1000) and (line2_value < 1000) :
    dc_motor.stop() 
    dc_motor1.stop()