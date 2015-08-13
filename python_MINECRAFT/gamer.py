import tailer
from pyfirmata import Arduino, util
from pymouse import PyMouse
from pykeyboard import PyKeyboard
m = PyMouse()
k = PyKeyboard()
import time
import serial
ser = serial.Serial('/dev/tty.usbmodem1461', 9600, timeout=None)

while 1:
    data = ser.read()
    if data == 'd':  
        print('BUTTON')
        k.press_key('d')
    if data == 'a':  
        print('BUTTON')
        k.press_key('a')
    if data == 'w':  
        print('BUTTON')
        k.press_key('w')
    if data == 's':  
        print('BUTTON')
        k.press_key('s')
    if data == 'z':    
        k.release_key('a')
    if data == 'x':    
        k.release_key('w')
    if data == 'c':    
        k.release_key('d')
    if data == 'v':    
        k.release_key('s')
    if data == '1':
        k.press_key('p')
    if data == '2':
        k.release_key('p')
        
        
       
 

       


        
        
