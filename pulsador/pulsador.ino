const byte ledPin = 13;
const byte interruptPin = 2;
volatile byte state = LOW;
volatile byte pinState = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);
}

void loop() {
    digitalWrite(ledPin, state);
}

void blink() {
  delay(500);
  pinState = digitalRead(interruptPin);
  if(pinState == LOW){
    state = !state;
  }
}
