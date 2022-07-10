/*
  Blink

  Turns an LED on and off repeatedly.

  The LED must be connected ot pin 13.
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1500);            // wait for a second and a half
  digitalWrite(13, LOW);  // turn the LED off by making the voltage LOW
  delay(500);             // wait for half a second
}
