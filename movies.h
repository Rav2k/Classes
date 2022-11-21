#include <iostream>
#include "media.h"
#include <cstring>

using namespace std;

class movies: public media{
 public:
  movies();
  char* director();
  char* duration();
  double getRating();
  double rating;
  char* director;
  char* duration;
}
