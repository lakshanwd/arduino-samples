#include "Arduino.h"
#include "Blink.h"

Blink::Blink(int p1, int t = 0){
  ledPin1 = p1;
  interval = t;
  pinMode(ledPin1, OUTPUT);
}

void Blink::doTask(){
  digitalWrite(ledPin1, HIGH);
  delay(interval);
  digitalWrite(ledPin1, LOW);
  delay(interval);
}
