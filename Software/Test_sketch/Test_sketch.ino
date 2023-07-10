#include <Arduino.h>
#include <Wire.h>
#include <ADS1115.h>

// Manual for library: http://lygte-info.dk/project/ADS1115Library%20UK.html

ADS1115 adc;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  adc.setSpeed(ADS1115_SPEED_8SPS);
}

void loop() {

  Serial.print(adc.convert(ADS1115_CHANNEL01,ADS1115_RANGE_6144));
  Serial.print(",");
  Serial.print(adc.convert(ADS1115_CHANNEL23,ADS1115_RANGE_6144));
  Serial.println();
  delay(10);
}
