/*
 * Week 2 — FSR Pressure Sensor Reading
 * Reads raw ADC values from Force Sensing Resistor
 * Wiring: FSR leg 1 → 3.3V, FSR leg 2 → GPIO4 + 1K resistor to GND
 * ADC range: 0-4095 (12-bit ESP32 ADC)
 * Baseline reading: 171-178 (no press)
 * Max reading: ~1300 (hard press)
 * 
 * Adapted from:
 * - RC-Controller by Nardo45 (getPressureSensorValues pattern)
 * - Smart Pressure Ulcer System (FSR pin assignment and analogRead approach)
 * GitHub: https://github.com/Dan-borg/ASD-Sensory-Device
 */

#define FSR_PIN 4

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("ASD Sensory Device — Week 2 FSR Sensor Test");
  Serial.println("Press the sensor to see values change");
  Serial.println("timestamp_ms, raw_adc_value");
}

int readFSR() {
  return analogRead(FSR_PIN);
}

void loop() {
  int sensorValue = readFSR();
  Serial.print(millis());
  Serial.print(", ");
  Serial.println(sensorValue);
  delay(100);
}
