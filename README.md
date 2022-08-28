# Arduino to Raspberry Pi Prototype

Prototype: serial communication between Arduino and Raspberry Pi.

## Environment

- Windows 10 64-bit
- Arduino IDE 1.8.19
- Python 3.10.6

## Preparation

1. Install [ArduinoJson](https://arduinojson.org/v6/doc/installation/#option-1-use-the-arduino-library-manager) to Arduino IDE.
2. Install PySerial
    ```powershell
    pip install pyserial==3.5  # Install PySerial only
    pip install -r requirements.txt  # Install required packages using requirements.txt
    ```

## Usage

- Send Data (Arduino): sender.ino
- Receive Data (Raspberry Pi or PC): receiver.py
