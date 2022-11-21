#include <iostream>
#include "media.h"

using namespace std;

media::media(){
  title = new char[20];
}

char* media::gettitle(){
  return title;
}

int media::getyear(){
  return year;
}

void media::printStuff(){  
}
