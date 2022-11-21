#include <iostream>
#include "videogames.h"
#include <cstring>

using namespace std;

videogames::videogames(){
  publisher = new char[20];
}

char* videogames:: getPublisher(){
  return publisher;
}

double videogames::getRating(){
  return rating;
}

void videogames::printStuff(){
  cout<<title<<endl;
  cout<<year<<endl;
  cout<<publisher<<endl;
  cout<<rating<<endl;
}
