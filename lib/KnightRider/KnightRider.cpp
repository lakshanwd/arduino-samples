#include "Arduino.h"
#include "KnightRider.h"

int arraySize = 0;
int ledPins[] ={3,5,6,9,10};
KnightRider::KnightRider(int pins[], int t){
  interval = t;
  arraySize = sizeof(ledPins)/sizeof(ledPins[0]);
  for(int i=0; i < arraySize; i++){
    pinMode(ledPins[i], OUTPUT);
  }
}

int getBrightness(int position){
  return map(position, 0, 2, 0, 255);
}

int getFwdPin(int relativePosition){
  if(relativePosition > 0){
    return relativePosition;
  } else {
    return relativePosition * -1;
  }
}

int getBwdPin(int relativePosition){
  if(relativePosition > (arraySize - 1)){
    return (arraySize - 1) - (relativePosition - (arraySize - 1));
  } else {
    return relativePosition;
  }
}

void KnightRider::doTask(){
  for(int i=0; i < arraySize; i++){
    analogWrite(ledPins[getFwdPin(i-2)],getBrightness(0));
    analogWrite(ledPins[getFwdPin(i-1)],getBrightness(1));
    analogWrite(ledPins[getFwdPin(i-0)],getBrightness(2));
    if(i != (arraySize - 1)){
      delay(interval);
    }
  }

  for(int i=(arraySize - 1); i >= 0; i--){
    analogWrite(ledPins[getFwdPin(i+2)],getBrightness(0));
    analogWrite(ledPins[getFwdPin(i+1)],getBrightness(1));
    analogWrite(ledPins[getFwdPin(i+0)],getBrightness(2));
    if(i != 0){
      delay(interval);
    }
  }
}
