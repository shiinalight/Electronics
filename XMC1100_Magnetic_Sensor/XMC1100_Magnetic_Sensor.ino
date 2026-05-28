/** Project CPP includes. */
#include "TLx493D_inc.hpp"

using namespace ifx::tlx493d;

/* Definition of the power pin and sensor objects for Kit2Go XMC1100 boards. */
const uint8_t POWER_PIN = 15; // XMC1100 : LED2

TLx493D_A1B6 dut(Wire, TLx493D_IIC_ADDR_A0_e);

void setup() {
    Serial.begin(115200);
    delay(3000);

    dut.setPowerPin(POWER_PIN, OUTPUT, INPUT, HIGH, LOW, 0, 250000);
    dut.begin();

    Serial.print("setup done.\n");
}

void loop() {
    double t = 0, x = 0, y = 0, z = 0;

    bool ok = dut.getMagneticFieldAndTemperature(&x, &y, &z, &t);

    if (ok) {
        Serial.print("Temperature is: ");
        Serial.print(t);
        Serial.println(" °C");

        Serial.print("Value X is: ");
        Serial.print(x);
        Serial.println(" mT");

        Serial.print("Value Y is: ");
        Serial.print(y);
        Serial.println(" mT");

        Serial.print("Value Z is: ");
        Serial.print(z);
        Serial.println(" mT");
    } else {
        Serial.println("Sensor read error");
    }

    Serial.println();
    delay(1000);
}