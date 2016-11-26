/*
 Input Pullup Serial

 This example demonstrates the use of pinMode(INPUT_PULLUP). It reads a
 digital input on pin 2 and prints the results to the serial monitor.

 The circuit:
 * Momentary switch attached from pin 2 to ground
 * Built-in LED on pin 13

 Unlike pinMode(INPUT), there is no pull-down resistor necessary. An internal
 20K-ohm resistor is pulled to 5V. This configuration causes the input to
 read HIGH when the switch is open, and LOW when it is closed.

 created 14 March 2012
 by Scott Fitzgerald

 http://www.arduino.cc/en/Tutorial/InputPullupSerial

 This example code is in the public domain

 */

const byte interruptBajar = 2;
const byte interruptSubir = 3;
int brightness = 0;  

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin2 as an input and enable the internal pull-up resistor
  pinMode(interruptBajar, INPUT_PULLUP);
  pinMode(interruptSubir, INPUT_PULLUP);
  pinMode(9, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(interruptSubir), subir, CHANGE);
  attachInterrupt(digitalPinToInterrupt(interruptBajar), bajar, CHANGE);
}

void loop() {

}

void subir() {
  brightness = brightness+5;
  analogWrite(9, brightness);
  delay(50);
}


void bajar(){
  brightness = brightness-5;
  analogWrite(9, brightness);
  if(brightness <= 0){
    brightness = 0;
    digitalWrite(9, LOW);
  }
  delay(50);
}



