# Raspberry Pi pico to PySerial Prototype

Prototype: serial communication between Raspberry Pi pico and Raspberry Pi.

## Environment

- Receiver
  - Windows 10 64-bit
- Sender
  - Raspberry Pi pico
  - Arduino Nano
- Software
    - Arduino IDE 1.8.19
    - Python 3.10.6

## Preparation

1. Install [Arduino-Pico](https://github.com/earlephilhower/arduino-pico) to Arduino IDE.
2. Install [ArduinoJson](https://arduinojson.org/v6/doc/installation/#option-1-use-the-arduino-library-manager) to Arduino IDE.
3. Install PySerial (There are two options)
    ```powershell
    pip install pyserial  # Option 1: Install PySerial only
    pip install -r requirements.txt  # Option 2: Install required packages using requirements.txt
    ```

## Usage

- Send Data (Raspberry Pi pico or Arduino): sender.ino
- Receive Data (Raspberry Pi or PC): receiver.py
