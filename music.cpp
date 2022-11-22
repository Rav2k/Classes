#include <iostream>
#include "music.h"
#include <cstring>

using namespace std;

music::music(){//music function that defines variables
  publisher = new char[20];
  artist  = new char[20];
}

char* music::getpublisher(){////function to get the publisher of the music
  return publisher;
}

char* music::getartist(){//function to get the name of the artist
  return artist;
}

double music::getduration(){//function to get the duration of the music
  return duration;
}

void music::printStuff(){//function for printing out the music media description
  cout<<title<<endl;
  cout<<artist<<endl;
  cout<<year<<endl;
  cout<<duration<<endl;
  cout<<publisher<<endl;
}
