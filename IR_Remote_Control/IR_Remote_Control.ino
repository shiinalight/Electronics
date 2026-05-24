#include <IRremote.h>

const byte IR_RECEIVE_PIN = 2;

const byte LED1 = 8;
const byte LED2 = 9;
const byte LED3 = 10;
const byte LED4 = 11;

void setup()
{
  Serial.begin(115200);
  delay(500);

  Serial.println("IR Receive test");

  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop()
{
  if (IrReceiver.decode())
  {
    byte command = IrReceiver.decodedIRData.command;

    Serial.print("Command: 0x");
    Serial.println(command, HEX);

    switch (command)
    {
      case 0x0C:   // Button 1
        digitalWrite(LED1, HIGH);
        break;

      case 0x18:   // Button 2
        digitalWrite(LED1, LOW);
        break;

      case 0x5E:   // Button 3
        digitalWrite(LED2, HIGH);
        break;

      case 0x08:   // Button 4
        digitalWrite(LED2, LOW);
        break;

      case 0x1C:   // Button 5
        digitalWrite(LED3, HIGH);
        break;

      case 0x5A:   // Button 6
        digitalWrite(LED3, LOW);
        break;

      case 0x42:   // Button 7
        digitalWrite(LED4, HIGH);
        break;

      case 0x52:   // Button 8
        digitalWrite(LED4, LOW);
        break;
    }

    IrReceiver.resume();
  }
}