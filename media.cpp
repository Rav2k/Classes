#include <iostream>
#include "media.h"

using namespace std;

media::media(){
  title = new char[20];
}

char* media::gettitle(){// when asking for the title of a media in the class cpp file it will return the title, which is a variable in the media.h file that is different for each child class(music, movies videogames)
  return title;
}

int media::getyear(){//same as title but for year
  return year;
}

void media::printStuff(){
}
