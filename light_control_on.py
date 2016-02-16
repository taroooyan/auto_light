# -*- coding: utf-8 -*-
import serial
import time

ser = serial.Serial('/dev/ttyACM0',9600)
time.sleep(5)
ser.write('1')
time.sleep(5)
ser.write('end')
time.sleep(5)

ser.close()
