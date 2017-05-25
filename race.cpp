// race.cpp
#include <iostream>
#include "horse.h"
#include "race.h"

Race::Race(){
  length = 25;            // default lenghth is 25
} //end null parameter constructor

Race::Race(int length){
  Race::length = length;  // specifiy race length with this
} //end Race overload constructor

void Race::printLane(int horseNum){ 
  // this only prints a single lane, must iterate in start method()
  // print track behind horse with .
  // horse number
  // print track infront of horse with .

  int track;
  // Remember to specify Horse with array[] when calling its methods
  // Horse:: is not needed becuase the scope is implided by array[].method()

  if (array[horseNum].getPosition() > length){
    // if a horse wins just print this
    std::cout << "Horse " << horseNum << " wins!";
  }
  else{
    for (track = 0; track <= length; track++){
      if (array[horseNum].getPosition() == track ){
        std::cout << horseNum;
      }
      else{
        std::cout << ".";
      }
    } 
  }
  std::cout << std::endl;
} // end printLane constructor

void Race::start(){
  int i;
  bool keepRacing = true;
      
  std::cout << "Welcome to the C++ Derby" << std::endl;
  for (i = 0; i<5; i++){
    printLane(i);
  }
       
  //start race
  std::cout << "Press enter to start race:";
  std::cin.ignore();

  //advance a horse and print its progress then repeat 
  for (i = 0; i<5; i++){
    array[i].advance(); 
    printLane(i);
  }
      
  while(keepRacing){
    std::cout << "Press enter for another turn:";
    std::cin.ignore();
        
    // have horse keep advancing and print progress
    for (i = 0; i<5; i++){ 
      array[i].advance();
      printLane(i);
    }

    // determine when to stop advancing race
    for (i = 0; i<5; i++){
      if (array[i].getPosition() > length){
        keepRacing = false;
        break;
      }
    }   
  } 
  std::cout << "The race is over!" << std::endl;
} // end start() constructor

