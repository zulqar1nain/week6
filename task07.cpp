#include <iostream>
using namespace std;
 string calculatespeed(float speed);
main()
{
   float speed;
   cout<<"Enter speed: ";
   cin>>speed;
   string cat=calculatespeed(speed);
   cout <<"  "   <<cat;

}
string calculatespeed(float speed)
{
string claim;
   if(speed<=10)
    {
        claim="slow";
    }
   else if(speed>10 &&  speed<=50)
    {
        claim="average";
    }
   else if(speed>50  &&  speed<=150)
    {
        claim="fast";
    }
   else if (speed>150  && speed<=1000)
    {
        claim="ultra fast";
    }
   else
    {
        claim="extreme fast";
    }
    return claim;
}