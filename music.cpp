#include <iostream>
#include "music.h"
#include <cstring>

using namespace std;

music::music(){
  publisher = new char[20];
  artist  = new char[20];
}

char* music::getpublisher(){
  return publisher;
}

char* music::getartist(){
  return artist;
}

double music::getduration(){
  return duration;
}

void music::printStuff(){
  cout<<title<<endl;
  cout<<artist<<endl;
  cout<<year<<endl;
  cout<<duration<<endl;
  cout<<publisher<<endl;
}
