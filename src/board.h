#define LED_PIN 17

void boardSetup() {
  pinMode(LED_PIN,OUTPUT);
}

void led_off() {
  digitalWrite(LED_PIN, LOW);
}

void led_on() {
  digitalWrite(LED_PIN, HIGH);
}
