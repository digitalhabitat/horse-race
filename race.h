// race.h
#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race{
  private:
    Horse array[5];
    int length;
  public:
    Race();
    Race(int length);
    void printLane(int horseNum);
    void start();
}; // end Race class declartion

#endif
