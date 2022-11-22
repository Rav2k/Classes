#include <iostream>
#include "videogames.h"
#include <cstring>

using namespace std;

videogames::videogames(){
  publisher = new char[20];
}

char* videogames:: getPublisher(){//returns the publisher
  return publisher;
}

double videogames::getRating(){
  return rating;
}

void videogames::printStuff(){//function to print the videogame's description
  cout<<title<<endl;
  cout<<year<<endl;
  cout<<publisher<<endl;
  cout<<rating<<endl;
}
