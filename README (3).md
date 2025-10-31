# 💡 Blinking LED with Arduino UNO

This project demonstrates one of the most fundamental electronics experiments — blinking an LED using an Arduino UNO board.  
It introduces digital output control, circuit setup on a breadboard, and communication between the Arduino and a computer using the Arduino IDE on macOS.

---

## ⚙️ Components Used
| Component | Quantity | Description |
|------------|-----------|--------------|
| Arduino UNO (CH340 clone) | 1 | Main microcontroller board |
| LED (green) | 1 | Light-emitting diode |
| 270 Ω Resistor | 1 | Current limiting resistor |
| Breadboard | 1 | For circuit prototyping |
| Jumper Wires | 2–3 | For connections |
| USB Cable (Type-A to Type-B) | 1 | For power and programming |

---

## 🔌 Circuit Connection

| Arduino Pin | Breadboard Connection |
|--------------|----------------------|
| **D12** | → **Resistor → LED anode (long leg)** |
| **GND** | → **LED cathode (short leg)** |

➡️ The resistor must be **in series** with the LED to prevent damage.

---

## 🧠 Code

```cpp
void setup() {
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
}
```

💡 The LED turns ON for one second and OFF for one second, repeating indefinitely.

---

## 🚀 Upload Instructions (macOS)

1. Connect your Arduino UNO via USB.  
2. Open **Arduino IDE**.  
3. Go to **Tools → Board → Arduino Uno**.  
4. Go to **Tools → Port → `/dev/cu.usbserial-xxx`** (or similar).  
5. Upload the sketch (▶️ icon).  
6. The LED should now blink every second!

If you’re using a **clone UNO (CH340 chip)**, install the [CH340 driver for macOS](https://github.com/adrianmihalko/ch340g-ch34g-ch34x-mac-os-x-driver).

---

## 📸 Setup Example

| Breadboard Photo | Circuit Schematic |
|-------------------|------------------|
| ![Breadboard setup](breadboard_photo.jpg) | ![Schematic](schematic.png) |

---

## 📚 Learning Outcomes

- Understanding of digital output in Arduino.  
- Practice using breadboards and resistors.  
- Uploading sketches from macOS to Arduino UNO.  
- Recognition of USB driver setup for CH340 boards.

---

## 🪪 License

MIT License  
© 2025 Nooshin Pourkamali  
Feel free to use, modify, and share this project for educational purposes.

---

### 🧩 Tags
`#arduino` `#electronics` `#beginner-project` `#macos` `#led` `#embedded-systems`
