import tailer
import time
import serial
ser = serial.Serial('/dev/tty.usbmodem1461', 9600, timeout=None)
import tailer
for line in tailer.follow(open('/Users/Mike/Library/Application Support/minecraft/logs/latest.log')):
    if "Arduino LED Triggered" in line:
	print "Sending message to Arduino"
        ser.write('5')
    if "Something else" in line:
        ser.write('4')