#ifndef KNIGHTRIDER_H
#define KNIGHTRIDER_H

class KnightRider {
  private:
    int interval;
  public:
    KnightRider(int ledPins[], int interval);
    void doTask();
};

#endif
