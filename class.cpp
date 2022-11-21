#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"
#include "music.h"
#include "videogames.h"
#include "movies.h"

using namespace std;

void addMethod(vector<media*>&storage);
void searchMethod(vector<media*>&storage);
void deleteMethod(vector<media*>&storage);
int main(){
  char action[20];
  vector<media*> storage;
  cout<<"Select what you want to do"<<endl;
  cout<<endl;
  do{
    cout<<"add, search, or delete. Type quit to quit the program(all in lowercase)"<<endl;
    cin.getline(action, 20, '\n');
    if(strcmp(action, "add") == 0){
      addMethod(storage);
    }
    else if(strcmp(action, "search")==0){
      searchMethod(storage);
    }
    else if(strcmp(action, "delete")==0){
      deleteMethod(storage);
    }
  }while(strcmp(action, "quit") != 0);
}
void addMethod(vector<media*>&storage){
  music* mus = new music();
  videogames* video = new videogames();//Videogames
  movies* movie = new movies();//Movies
  char mediaType[20];
  cout<<"What media do you want to add? (put in lowercase)"<<endl;
  cin.get(mediaType, 20);
  if(strcmp(mediaType, "music")==0){
    cout<<"Title: "<<endl;
    cin>>mus->title;
    cout<< "Artist's name: "<<endl;
    cin>>mus->artist;
    cout<<"Year made: "<<endl;
    cin>>mus->year;
    cout<<"Duration of song: "<<endl;
    cin>>mus->duration;
    cout<<"Publisher: "<<endl;
    cin>>mus->publisher;
    cin.ignore();
    storage.push_back(mus);
    cout<<"Music added"<<endl;
  }
  else if(strcmp(mediaType,"videogames")==0){
    cout<<"Title: "<<endl;
    cin>>video->title;
    cout<< "Year: "<<endl;
    cin>>video->year;
    cout<<"Publisher: "<<endl;
    cin>>video->publisher;
    cout<<"Rating: "<<endl;
    cin>>video->rating;
    cin.ignore();
    storage.push_back(video);
    cout<<"Videogame added"<<endl;
  }
  else if(strcmp(mediaType, "movies")==0){
    cout<<"Title: "<<endl;
    cin>>movie->title;
    cout<< "Director: "<<endl;
    cin>>movie->director;
    cout<<"Year: "<<endl;
    cin>>movie->year;
    cout<<"Duration: "<<endl
    cin>>movie->duration;
    cout<<"Rating: "<<endl;
    cin>>movie->rating;
    cin.ignore();
    storage.push_back(movie);
    cout<<"Movie added"<<endl;
  }
}
void searchMethod(vector<media*>&storage){
   vector<media*>::iterator ptr;
   char searchType[20];
   cout<<"Do you want to search by title or year? "<<endl;
   cin>>searchType;
   cin.ignore();
   char typeMedia[20];
   if(strcmp(searchType, "title") == 0){
     char userTitle[20];
     cout<<"What type of media?(all lowercase)"<<endl;
     cin.getline(typeMedia, 20);
     if(strcmp(typeMedia, "music") ==0){
      cout<<"Title: "<<endl;
      cin.getline(userTitle, 20);
      for (ptr = storage.begin(); ptr != storage.end(); ptr++){
         if(strcmp((*ptr)->title, userTitle) == 0){
	   (*ptr)->printStuff();
          }
         }
     }
     else if(strcmp(typeMedia, "videogames") == 0){
      cout<<"Title: "<<endl;
      cin.getline(userTitle, 20);
      for (ptr = storage.begin(); ptr != storage.end(); ptr++){
         if(strcmp((*ptr)->title, userTitle) == 0){
	   (*ptr)->printStuff();
            }
          }
     }

     else if(strcmp(typeMedia, "movies") == 0){
      cout<<"Title: "<<endl;
      cin.getline(userTitle, 20);
      
      for (ptr = storage.begin(); ptr != storage.end(); ptr++){
         if(strcmp((*ptr)->title, userTitle) == 0){
	   (*ptr)->printStuff();
            }
          }

     }
   }
     if(strcmp(searchType, "year") == 0){
       int userYear;
       char typeMedia2[20];
       cout<<"What type of media?(all lowercase): "<<endl;
       cin.getline(typeMedia2, 20);
       if(strcmp(typeMedia2, "music")==0){//if music
	 cout<<"Year: "<<endl;
	 cin>>userYear;
	 for (ptr = storage.begin(); ptr != storage.end(); ptr++){	   
	   if((*ptr)->year==userYear){
	     (*ptr)->printStuff();
	   }
          }
     }
     
       else if(strcmp(typeMedia2, "videogames")){
	 cout<<"Year: "<<endl;
         cin>>userYear;
	 cin.ignore();
         for (ptr = storage.begin(); ptr != storage.end(); ptr++){
           if((*ptr)->year==userYear){
             (*ptr)->printStuff();
            }
          }
       }
       else if(strcmp(typeMedia2, "movies")){
	 cout<<"Year: "<<endl;
         cin>>userYear;
         cin.ignore();
         for (ptr = storage.begin(); ptr != storage.end(); ptr++){
           if((*ptr)->year==userYear){
             (*ptr)->printStuff();
            }
          }
       }
     }
    }
void deleteMethod(vector<media*>&storage){
   vector<media*>::iterator ptr;
   char searchType2[20];
   cout<<"Do you want to search by title or year? "<<endl;
   cin>>searchType2;
   cin.ignore();
   char typeMedia2[20];
   if(strcmp(searchType2, "title") ==0){
     char userTitle2[20];
     cout<<"What media type(lowercase): "<<endl;
     cin.get(typeMedia2, 20);
     if(strcmp(typeMedia2, "music") == 0){
         cout<<"Title: "<<endl;
         cin>>userTitle2;
	 cin.ignore();
         for (ptr = storage.begin(); ptr != storage.end(); ptr++){                      
           if(strcmp((*ptr)->title, userTitle2) == 0){
           delete *ptr;
	   cout<<"Music has been succesfully deleted"<<endl;
           storage.erase(ptr);
           break;
          }
        }
     }
     
     else if(strcmp(typeMedia2, "videogames")==0){
       cout<<"Title: "<<endl;
       cin>>userTitle2;
       cin.ignore();//will it ignore for loop and if?
       for (ptr = storage.begin(); ptr != storage.end(); ptr++){
         if(strcmp((*ptr)->title, userTitle2) == 0){
           delete *ptr;
           cout<<"Videogame has been successfully deleted"<<endl;
           storage.erase(ptr);
           break;
          }
        }
     }

     else if(strcmp(typeMedia2, "movies") == 0){
       cout<<"Title: "<<endl;
       cin>>userTitle2;
       cin.ignore();//will it ignore for loop and if?
       for (ptr = storage.begin(); ptr != storage.end(); ptr++){
         if(strcmp((*ptr)->title, userTitle2) == 0){
           delete *ptr;
           cout<<"Movie has been successfully deleted"<<endl;
           storage.erase(ptr);
           break;
          }
        }
     }
  }
   else if(strcmp(searchType2, "year") == 0){
     char typeMedia3[20];
     int userYear2;
     cout<<"What media type(lowercase): "<<endl;
     cin.get(typeMedia3, 20);
     if(strcmp(typeMedia3, "music") ==0){
         cout<<"Year: "<<endl;
         cin>>userYear2;
         for (ptr = storage.begin(); ptr != storage.end(); ptr++){
           if((*ptr)->year == userYear2){
             delete *ptr;
             storage.erase(ptr);
	     cout<<"Music has been deleted"<<endl;
             break;
           }
         }
      }
     else if(strcmp(typeMedia2, "videogames") == 0){
        cout<<"Year: "<<endl;
         cin>>userYear2;
	 cin.ignore();
         for (ptr = storage.begin(); ptr != storage.end(); ptr++){
           if((*ptr)->year == userYear2){
             delete *ptr;
             storage.erase(ptr);
             cout<<"Videogame has been deleted"<<endl;
             break;
           }
         }
     }

     else if(strcmp(typeMedia2, "movies") == 0){
        cout<<"Year: "<<endl;
         cin>>userYear2;
	 cin.ignore();
	 for (ptr = storage.begin(); ptr != storage.end(); ptr++){
           if((*ptr)->year == userYear2){
             delete *ptr;
             storage.erase(ptr);
             cout<<"Movies has been deleted"<<endl;
             break;
           }
         }
     }


   }
}
