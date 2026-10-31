// Lab 6 - Task 1: Blink an external LED once per second
// Circuit: Arduino pin 8 -> 330 ohm resistor -> LED -> GND

const int LED_PIN = 8;          // digital output pin driving the LED

void setup() {
  pinMode(LED_PIN, OUTPUT);     // configure the pin as an output
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // LED on (5 V at the pin)
  delay(500);                   // stay on for 0.5 s
  digitalWrite(LED_PIN, LOW);   // LED off (0 V at the pin)
  delay(500);                   // stay off for 0.5 s -> 1 full blink per second
}
