#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
const int analogPin = A0;
float voltage = 0.0;
float referenceVoltage = 5.0;
float scalingFactor = 2.4;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Voltage:");
}

void loop() {
  int analogValue = analogRead(analogPin);
  voltage = (analogValue / 1023.0) * referenceVoltage * scalingFactor;
  lcd.setCursor(0, 1);
  lcd.print(voltage, 2);
  lcd.print(" V   ");
  delay(500);
}
