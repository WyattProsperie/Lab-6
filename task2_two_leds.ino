// Lab 6 - Task 2: Two LEDs blinking at different intervals
// Circuit: pin 8 -> 330 ohm -> LED1 -> GND
//          pin 9 -> 330 ohm -> LED2 -> GND
//
// LED1: 500 ms ON / 500 ms OFF  -> one blink every second
// LED2: 1000 ms ON / 1000 ms OFF -> one blink every two seconds
//
// millis() is used instead of delay() so both LEDs run independently.

const int LED1_PIN = 8;
const int LED2_PIN = 9;

const unsigned long LED1_INTERVAL = 500;   // ms between toggles for LED1
const unsigned long LED2_INTERVAL = 1000;  // ms between toggles for LED2

unsigned long prevMillis1 = 0;
unsigned long prevMillis2 = 0;

bool led1State = LOW;
bool led2State = LOW;

void setup() {
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
}

void loop() {
  unsigned long now = millis();    // time since the board started, in ms

  // Toggle LED1 every 500 ms
  if (now - prevMillis1 >= LED1_INTERVAL) {
    prevMillis1 = now;
    led1State = !led1State;
    digitalWrite(LED1_PIN, led1State);
  }

  // Toggle LED2 every 1000 ms
  if (now - prevMillis2 >= LED2_INTERVAL) {
    prevMillis2 = now;
    led2State = !led2State;
    digitalWrite(LED2_PIN, led2State);
  }
}
