import json

import serial

port = "COM5"
with serial.Serial(port=port, baudrate=9600, timeout=1) as ser:
    # Timeout is 1 sec
    for _ in range(60):
        line = ser.readline()   # read a '\n' terminated line
        line_str = line.decode()
        if line_str == "":
            continue
        data = json.loads(line_str)
        print(f"{data}, {type(data)}")
