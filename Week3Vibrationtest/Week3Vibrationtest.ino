/*
 * Week 3 – Vibration Motor Test
 * Tests the vibration motor module on GPIO 13
 * Motor should vibrate for 1 second, then stop for 1 second
 */

#define MOTOR_PIN 13

void setup() {
  pinMode(MOTOR_PIN, OUTPUT);
  Serial.begin(115200);
  delay(1000);
  Serial.println("ASD Sensory Device – Motor Test");
}

void loop() {
  digitalWrite(MOTOR_PIN, HIGH);
  Serial.println("Motor ON");
  delay(1000);
  digitalWrite(MOTOR_PIN, LOW);
  Serial.println("Motor OFF");
  delay(1000);
}