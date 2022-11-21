#include <iostream>
#include "movies.h"
#include <cstring>

using namespace std;

movies::movies(){
  director = new char[20];
}

char* movies::getDirector(){
  return director;
}

double movies::getRating(){
  return rating;
}

double movies::getDuration(){
  return duration;
}

void movies::printStuff(){
    cout<<title<<endl;
    cout<<director<<endl;
    cout<<year<<endl;
    cout<<duration<<endl;
    cout<<publisher<<endl;
    cout<<rating<<endl;
}
