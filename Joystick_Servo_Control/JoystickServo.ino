#include <Servo.h>

Servo servo1;

const int VRX = A0;
const int VRY = A1;
const int SW  = 4;

int servoAngle = 90;
int lastX = 0;
int lastY = 0;

void setup()
{
  Serial.begin(9600);

  servo1.attach(7);

  pinMode(SW, INPUT_PULLUP);

  servo1.write(servoAngle);
}

void loop()
{
  int xValue = analogRead(VRX);
  int yValue = analogRead(VRY);

  if (abs(xValue - lastX) > 5 || abs(yValue - lastY) > 5)
  {
    Serial.print("X: ");
    Serial.print(xValue);

    Serial.print(" | Y: ");
    Serial.println(yValue);

    lastX = xValue;
    lastY = yValue;
  }

  servoAngle = map(xValue, 0, 1023, 0, 180);
  servo1.write(servoAngle);

  if (digitalRead(SW) == LOW)
  {
    servo1.write(90);
    Serial.println("Reset to center");
    delay(300);
  }

  delay(15);
}