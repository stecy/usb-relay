#!/usr/bin/env python

import serial
import time
import argparse

parser = argparse.ArgumentParser(prog='relay-interface', description='Control a relay over USB')
parser.add_argument('port', help='Port to use.  Example: /dev/ttyUSB1 or COM1')
parser.add_argument('switch',type=bytes, help='1 to turn ON and 0 to turn OFF')
args = parser.parse_args()

try:
	device = serial.Serial(args.port, 9600)
	time.sleep(2)
except:
	print('Please check the port!')
	exit

device.write(args.switch)

data = device.read(3)
print(data)

#device.close()

