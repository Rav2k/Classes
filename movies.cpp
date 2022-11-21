#include <iostream>
#include "movies.h"
#include <cstring>

using namespace std;

movies::movies(){
  director = new char[20];
}

char* movies::getDirector(){//function to return the direction of the movies.
  return director;
}

double movies::getRating(){//function to return the rating of the movie.
  return rating;
}

double movies::getDuration(){//function to return the durantion of the movie.
  return duration;
}

void movies::printStuff(){//function to print the stuff in movie storage
    cout<<title<<endl;
    cout<<director<<endl;
    cout<<year<<endl;
    cout<<duration<<endl;
    cout<<publisher<<endl;
    cout<<rating<<endl;
}
