#include <iostream>
#include "media.h"
#include <cstring>

using namespace std;

class videogames: public media{
 public:
  videogames();
  void printStuff();
  char* getPublisher();
  double getRating();
  double rating;
  char* publisher;
  
};

