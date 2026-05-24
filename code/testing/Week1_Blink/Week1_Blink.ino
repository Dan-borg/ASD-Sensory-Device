/*
 * Week 1 — Board Validation
 * Tests that ESP32 is connected and uploading correctly
 * Built-in LED blinks to confirm successful upload
 * Adapted from standard ESP32 Arduino examples
 */

#define LED_BUILTIN_PIN 2

void setup() {
  pinMode(LED_BUILTIN_PIN, OUTPUT);
  Serial.begin(115200);
  delay(1000);
  Serial.println("ASD Sensory Device — Week 1 Board Test");
  Serial.println("ESP32 connected and running successfully");
}

void loop() {
  digitalWrite(LED_BUILTIN_PIN, HIGH);
  Serial.println("LED ON");
  delay(500);
  digitalWrite(LED_BUILTIN_PIN, LOW);
  Serial.println("LED OFF");
  delay(500);
}
