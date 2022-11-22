#include <iostream>
#include "media.h"
#include <cstring>

using namespace std;

class music: public media{
 public:
  music();
  void printStuff();
  char* getpublisher();// function for getting the publisher for media
  char* getartist();//function for getting the artist fo media 
  double getduration();//function for getting the duration of the media
  double duration;//variable for getting the duration
  char *publisher;//variable for getting the publisher
  char *artist;//variable for getting the artist 
};
