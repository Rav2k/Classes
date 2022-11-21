#include <iostream>
#include "media.h"
#include <cstring>

using namespace std;

class music: public media{
 public:
  music();
  void printStuff();
  char* getpublisher();
  char* getartist();
  double getduration();
  double duration;
  char *publisher;
  char *artist;
};
