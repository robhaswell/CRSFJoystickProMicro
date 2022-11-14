#define AVR_CRSF_BAUDRATE 250000

void ledOff() {
  TXLED0;
}

void ledOn() {
  TXLED1;
}
