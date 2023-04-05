#include <iostream>
using namespace std;
main()
{
  int holiday ,playholiday,normalplay;
  int hometown,playhometown,play;
  int insofia ,leapplay,playinsofia;
  string year;
  cout<<"Enter year: ";
  cin>>year;
  cout<<"Enter Holidays: ";
  cin>>holiday;
  cout<<"Enter traveling to hometown: ";
  cin>>hometown;
  insofia=48-hometown;
  playinsofia=insofia*3/4;
  playholiday=holiday*2/3;
  playhometown=hometown;
  play=playinsofia+playholiday+playhometown;
  if(year=="normal")
  {
   normalplay=play;
  cout<<"You play in normal year is: "  <<normalplay;
  }
  if(year=="leap")
  {
   leapplay=play+(play*15/100);
   cout<<"You play in leap year is: "   <<leapplay;
  }
}

  
  