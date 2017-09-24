#include "Arduino.h"
#include "Swap.h"

Swap::Swap(int p1, int p2, int t1 = 0){
  ledPin1 = p1;
  ledPin2 = p2;
  interval = t1;
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void Swap::doTask(){
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(interval);
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  delay(interval);
}
