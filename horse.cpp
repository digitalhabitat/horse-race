// horse.cpp
#include "horse.h"
#include <stdlib.h>

Horse::Horse(){
  Horse::position = 0;          // add a horse in default postion
} // end null prarmeter constructor

void Horse::advance(){
  Horse::position += rand()%2;  // horse moves one space on coin flip
} // end advance constructor

int Horse::getPosition(){
  return position;              // simply return position
} // end getPostion constructor
