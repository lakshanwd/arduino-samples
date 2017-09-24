#include <Arduino.h>
#include <Swap.h>
#include <Blink.h>

Swap *swap;
Blink *blink;

void setup(){
  Swap swap(6,10,500);
  ::swap = &swap;
  Blink blink(3,200);
  ::blink = &blink;
}

void loop(){
  swap->doTask();
  blink->doTask();
}
