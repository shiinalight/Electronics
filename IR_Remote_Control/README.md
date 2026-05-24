# IR Remote LED Control with Arduino

A simple Arduino project for controlling 4 LEDs using an IR remote controller and an IR receiver module.

## Features

- Decode IR remote signals
- Control 4 LEDs wirelessly
- Serial Monitor debugging
- Beginner-friendly embedded systems project

## Components Used

- Arduino UNO
- IR Receiver Module
- IR Remote Controller
- 4 LEDs
- 4 Resistors (220Ω recommended)
- Breadboard
- Jumper wires

## Circuit Overview

- IR Receiver signal pin connected to `D2`
- LEDs connected to:
  - LED1 → D8
  - LED2 → D9
  - LED3 → D10
  - LED4 → D11

## Remote Button Mapping

| Remote Button | HEX Code | Action   |
| ------------- | -------- | -------- |
| 1             | `0x0C`   | LED1 ON  |
| 2             | `0x18`   | LED1 OFF |
| 3             | `0x5E`   | LED2 ON  |
| 4             | `0x08`   | LED2 OFF |
| 5             | `0x1C`   | LED3 ON  |
| 6             | `0x5A`   | LED3 OFF |
| 7             | `0x42`   | LED4 ON  |
| 8             | `0x52`   | LED4 OFF |

## Installation

1. Install the Arduino IDE
2. Install the `IRremote` library:
   - Arduino IDE → Library Manager
   - Search for `IRremote`
3. Upload the code to your Arduino

## Demo

### Project Image

Add your image here:

```md
![Project Image](IR_Remote_Control.png)
```

### Demo GIF

Add your GIF here:

```md
![Demo GIF](IRremote_demo.gif)
```

## Folder Structure

```text
IR_Remote_LED_Control/
│
├── IR_Remote_LED_Control.ino
├── README.md
├── images/
│   └── project.jpg
└── media/
    └── demo.gif
```

## Future Improvements

- RGB LED control
- Servo motor control
- OLED display integration
- Remote-controlled robot
- Multiple IR remote profiles

## Author

Nooshin Pourkamali
