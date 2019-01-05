import serial
import argparse

parser = argparse.ArgumentParser(prog='relay-interface', description='Control a relay over USB')
parser.add_argument('usb', type=int, help='path')
parser.add_argument('switch', type=int, help='1 to turn ON and 0 to turn OFF')
args = parser.parse_args()

device = serial.Serial('/dev/ttyUSB1', 9600)


if args.switch == '1':
	device.write('1')
else:
	device.write('0')
