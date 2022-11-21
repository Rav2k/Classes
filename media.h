#include <iostream>
#include <cstring>
#ifndef media_h
#define media_h
using namespace std;

class media{
 public:
  virtual void printStuff();
  media();
  char* gettitle();
  int getyear();
  int year;
  char* title;
};

#endif
