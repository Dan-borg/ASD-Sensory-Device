#define FSR_PIN   4
#define MOTOR_PIN 5
#define LED_PIN   22

void setup() {
  pinMode(MOTOR_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  delay(1000);
  Serial.println("ASD Device Ready");
}

void loop() {
  int val = analogRead(FSR_PIN);
  
  Serial.print("FSR: ");
  Serial.println(val);

  if (val > 300) {
    digitalWrite(MOTOR_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);
    Serial.println("VIBRATING + LED ON");
  } else {
    digitalWrite(MOTOR_PIN, LOW);
    digitalWrite(LED_PIN, LOW);
  }

  delay(100);
}
