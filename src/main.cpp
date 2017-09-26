#include <Arduino.h>
#include <Swap.h>
#include <Blink.h>
#include <KnightRider.h>

Swap *swap;
Blink *blink;
KnightRider *knightRider;

void setup(){
  Swap swap(6,10,500);
  ::swap = &swap;

  Blink blink(13,10);
  ::blink = &blink;

  int elements[] = {3,5,6,9,10};
  KnightRider knightRider(elements,300);
  ::knightRider = &knightRider;
}

void loop(){
  //swap->doTask();
  //blink->doTask();
  //knightRider->doTask();
}
