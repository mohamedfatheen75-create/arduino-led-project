void setup() {
  pinMode(13, OUTPUT); // Sets pin 13 as an output
}

void loop() {
  digitalWrite(13, HIGH); // Turns the LED on
  delay(500);             // Waits for half a second
  digitalWrite(13, LOW);  // Turns the LED off
  delay(500);             // Waits for half a second
}
