#include <iostream>
#include "media.h"
#include <cstring>

using namespace std;

class videogames: public media{
 public:
  videogames();
  void printStuff();//function for printing out the stuff in videogames.
  char* getPublisher();//function for publisher in videogames.
  double getRating();//function for rating in videogames.
  double rating;//variable for one of the details needed for videogames.
  char* publisher;//variable for one of the details needed for videogames.
  
};

