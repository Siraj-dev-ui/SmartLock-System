#define LED_PIN     2     // LED output
#define REED_PIN    4     // Reed switch input
#define PIR_PIN     13    // PIR sensor input

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(REED_PIN, INPUT);
  pinMode(PIR_PIN, INPUT);

  Serial.begin(115200); // Optional for debugging
}

void loop() {
  int reedState = digitalRead(REED_PIN);
  int pirState  = digitalRead(PIR_PIN);

  // Logic: turn LED ON if door is open OR motion is detected
  if (reedState == HIGH || pirState == HIGH) {
    digitalWrite(LED_PIN, HIGH);  // Turn LED on
    Serial.println("Triggered: Door Open or Motion Detected");
  } else {
    digitalWrite(LED_PIN, LOW);   // Turn LED off
  }

  delay(100); // Debounce or read interval
}