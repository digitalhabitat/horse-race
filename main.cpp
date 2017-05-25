// main.cpp
#include <stdlib.h>
#include <time.h>
#include "horse.h"
#include "race.h"

int main(){
   srand(time(NULL));
   
   // like variables think class/type object/variable = contructor/data
   // ClassName instanceName = ClassName(data);
	
   Race derby_1 = Race();   //create an race instance 
   Race derby_2 = Race(80); //make a second but longer race
   derby_1.start();
   derby_2.start();

  return 0;

} // end main

