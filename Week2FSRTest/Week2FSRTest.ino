/*
 * Week 2 – FSR Test
 * Reads the force sensor on GPIO 34 (voltage divider with 10k resistor)
 * Expected: ~0 when untouched, rising up to ~4095 when pressed
 */

#define FSR_PIN 34

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("ASD Sensory Device – FSR Test");
}

void loop() {
  int val = analogRead(FSR_PIN);
  Serial.print("FSR: ");
  Serial.println(val);
  delay(200);
}