#include <iostream>
#include <cstring>
#ifndef media_h
#define media_h
using namespace std;

class media{
 public:
  virtual void printStuff(); // virtual because each media in the storage is different so when you're trying to find something and you know the media type you look in that medis type and print it's print stuff function.
  media();
  char* gettitle();//function for getting title.
  int getyear();//function for getting year
  int year;//varies by child
  char* title;//varies by child
};

#endif
