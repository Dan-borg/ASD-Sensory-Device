/*
 * Week 1 – LED Test
 * Tests the three feedback LEDs on the breadboard
 * Green = GPIO 25, Red = GPIO 26, Blue = GPIO 27
 * Each LED should light up in turn for 0.5 seconds
 */

#define GREEN_LED_PIN 25
#define RED_LED_PIN   26
#define BLUE_LED_PIN  27

void setup() {
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);
  Serial.begin(115200);
  delay(1000);
  Serial.println("ASD Sensory Device – LED Test");
}

void loop() {
  digitalWrite(GREEN_LED_PIN, HIGH);
  Serial.println("Green ON");
  delay(500);
  digitalWrite(GREEN_LED_PIN, LOW);

  digitalWrite(RED_LED_PIN, HIGH);
  Serial.println("Red ON");
  delay(500);
  digitalWrite(RED_LED_PIN, LOW);

  digitalWrite(BLUE_LED_PIN, HIGH);
  Serial.println("Blue ON");
  delay(500);
  digitalWrite(BLUE_LED_PIN, LOW);
}