const int BOARD_LED = D7;

void setup() {
    pinMode(BOARD_LED, OUTPUT);
}

void loop() {
    _blink(1, 15 * 1000);
}

void _blink(int duration, int pause) {
    digitalWrite(BOARD_LED, HIGH); // sets the LED on
    delay(duration);
    digitalWrite(BOARD_LED, LOW);  // sets the LED off
    delay(pause);
}
