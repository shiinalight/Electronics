# Joystick Servo Control with Arduino

A simple Arduino project for controlling a servo motor using a joystick module.

The joystick X-axis controls the servo angle in real time, while the joystick button resets the servo position to the center.

## Features

- Real-time joystick control
- Servo angle mapping from 0° to 180°
- Joystick button reset functionality
- Serial Monitor debugging
- Beginner-friendly robotics/control project

## Components Used

- Arduino UNO
- SG90 Servo Motor
- Joystick Module
- Breadboard
- Jumper Wires

## Wiring

### Servo Connections

| Servo Pin | Arduino |
| --------- | ------- |
| Signal    | D7      |
| VCC       | 5V      |
| GND       | GND     |

### Joystick Connections

| Joystick Pin | Arduino |
| ------------ | ------- |
| VRx          | A0      |
| VRy          | A1      |
| SW           | D4      |
| VCC          | 5V      |
| GND          | GND     |

## How It Works

- Moving the joystick left/right changes the servo angle.
- Pressing the joystick button resets the servo to the center position (90°).
- Joystick values are displayed in the Serial Monitor.

## Installation

1. Install the Arduino IDE
2. Install the Servo library (usually preinstalled)
3. Upload the code to the Arduino UNO

## Demo

### Project Image

![Demo GIF](JoystickServo_demo.gif)

## Future Improvements

- Add a second servo for pan/tilt movement
- Build a radar scanner
- Add ultrasonic distance sensing
- Create a robot arm controller
- Add OLED display feedback

## Author

Nooshin Pourkamali
