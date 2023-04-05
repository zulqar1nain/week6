#include <iostream>
using namespace std;
float totalincome(int c,int r,string quality);
main()
{
   int c,r;
   string quality;
   cout <<"enter quality: ";
   cin >>quality;
   cout <<"Enter collum: ";
   cin>>c;
   cout <<"Enter Row: ";
   cin>>r;
   float floincome=totalincome(c,r,quality);
   
   cout <<"Your total income is: "  <<floincome  <<endl;
   
}
float totalincome(int c,int r,string quality)
{
  float income;
  int chairs;
  chairs=r*c;
  
  if(quality=="premier")
   {
    income=chairs*12;
   }
  if(quality=="normal")
   {
      income=chairs*7.50;
   }
   if(quality=="discount")
   {
      income==chairs*5;
   }
   return income;
}









