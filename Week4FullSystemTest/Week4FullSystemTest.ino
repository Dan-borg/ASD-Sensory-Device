/*
 * Week 4 – Full System Test
 * FSR pressure controls the feedback LEDs and vibration strength
 * Green = light press, Blue = medium press, Red = hard press
 * Motor vibration gets stronger as pressure increases
 */

#define FSR_PIN        34
#define MOTOR_PIN      13
#define GREEN_LED_PIN  25
#define RED_LED_PIN    26
#define BLUE_LED_PIN   27

// Pressure thresholds – adjust after calibrating with your FSR
#define LIGHT_THRESHOLD   100
#define MEDIUM_THRESHOLD  1000
#define HARD_THRESHOLD    1800
#define MAX_PRESSURE      2400

void setup() {
  pinMode(MOTOR_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);
  Serial.begin(115200);
  delay(1000);
  Serial.println("ASD Sensory Device – Full System Test");
}

void loop() {
  int val = analogRead(FSR_PIN);

  // LEDs: one colour per pressure level
  digitalWrite(GREEN_LED_PIN, val > LIGHT_THRESHOLD  && val <= MEDIUM_THRESHOLD);
  digitalWrite(BLUE_LED_PIN,  val > MEDIUM_THRESHOLD && val <= HARD_THRESHOLD);
  digitalWrite(RED_LED_PIN,   val > HARD_THRESHOLD);

  // Motor: stronger vibration with more pressure, off when not pressed
  int strength = 0;
  if (val > LIGHT_THRESHOLD) {
            strength = map(constrain(val, LIGHT_THRESHOLD, MAX_PRESSURE), LIGHT_THRESHOLD, MAX_PRESSURE, 120, 255);
  }
  analogWrite(MOTOR_PIN, strength);

  Serial.print("FSR: ");
  Serial.print(val);
  Serial.print("  Motor: ");
  Serial.println(strength);
  delay(100);
}