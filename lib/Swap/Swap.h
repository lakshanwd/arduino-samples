#ifndef SWAP_H
#define SWAP_H

class Swap {
  private:
    int ledPin1;
    int ledPin2;
    int interval;
    int pinState;
  public:
    Swap(int ledPin1, int ledPin2, int interval = 0);
    void doTask();
};

#endif
