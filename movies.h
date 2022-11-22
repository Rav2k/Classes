#include <iostream>
#include "media.h"
#include <cstring>

using namespace std;

class movies: public media{
 public:
  movies();
  char* director();////function for getting the director
  char* duration();//function for getting the duration
  double getRating();//function for getting the rating
  double rating;//variable for getting the rating of the movie
  char* director;//variable for getting the director's name
  char* duration;//variable for getting the duration of the movie
}
