# -*- coding: utf-8 -*-
str = '1'
com = open("/dev/ttyACM0","r+")
system(" stty < /dev/ttyACM0 9600")
sleep(2)
com.write str
sleep(2)
com.write 'end'
sleep(2)
com.close()

