/*
 * Week 3b — Vibration Motor Standalone Test
 * Tests motor module independently before integration
 * Motor on GPIO5 (D5)
 * GitHub: https://github.com/Dan-borg/ASD-Sensory-Device
 */

#define MOTOR_PIN 5

void setup() {
  pinMode(MOTOR_PIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("Motor test starting");
}

void loop() {
  Serial.println("Motor ON");
  digitalWrite(MOTOR_PIN, HIGH);
  delay(1000);
  Serial.println("Motor OFF");
  digitalWrite(MOTOR_PIN, LOW);
  delay(1000);
}
