#include <Arduino.h>
#include <Swap.h>

Swap *swp;

void setup(){
  Swap swp(6,10,500);
  ::swp = &swp;
}

void loop(){
  swp->doTask();
}
