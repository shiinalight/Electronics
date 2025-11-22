# Change RGB LED Color with a Push Button (Elegoo UNO R3 / Arduino UNO)

This project uses an **Elegoo UNO R3 (Arduino-compatible)**, an **RGB
LED**, and a **push button**.\
Every time you press the button, the LED changes to the next color.

------------------------------------------------------------------------

## Hardware

-   Elegoo UNO R3 (or Arduino UNO)
-   1 × common--cathode RGB LED\
-   3 × 220--330 Ω resistors (for the R, G, B channels)
-   1 × push button
-   1 × 10 kΩ resistor (pull-down for the button)
-   Breadboard
-   Jumper wires
-   USB cable (for power & uploading code)

------------------------------------------------------------------------

## Wiring

### Pin assignments (from the sketch)

    const int buttonPin = 3;
    const int redPin    = 9;
    const int greenPin  = 10;
    const int bluePin   = 11;

### Connections

**RGB LED**

-   LED common cathode → **GND**
-   LED red pin → resistor → **D9**
-   LED green pin → resistor → **D10**
-   LED blue pin → resistor → **D11**

**Push button**

-   One side of the button → **D3**
-   Same side → **10 kΩ resistor → GND** (pull-down)
-   Other side → **5V**

------------------------------------------------------------------------

## Sketch

File: `Changing_LED_color_with_button.ino`

------------------------------------------------------------------------

## How to Run

1.  Open the `.ino` file in the Arduino IDE.
2.  Select **Tools → Board → Arduino Uno**.
3.  Select the correct **Tools → Port**.
4.  Click **Upload**.
5.  Press the button to cycle through LED colors.

------------------------------------------------------------------------

## Images

Add images like:

    ![Real circuit](images/IMG_7503.jpg)
    ![Fritzing diagram](images/button_push_color_change_.jpg)

Enjoy experimenting with RGB colors and buttons! 🌈🔘
