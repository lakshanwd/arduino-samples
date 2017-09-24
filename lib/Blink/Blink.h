#ifndef BLINK_H
#define BLINK_H

class Blink {
  private:
    int ledPin1;
    int interval;
  public:
    Blink(int ledPin1, int interval = 0);
    void doTask();
};

#endif
