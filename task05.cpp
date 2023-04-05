#include <iostream>
using namespace std;
float checkcost(string city,string product,int quantity);
main()
{
string city,product;
int quantity;
cout<<"Enter product: ";
cin>>product;
cout<<"Enter city: ";
cin>>city;
cout <<"Enter quantity: ";
cin>>quantity;
float totalcost=checkcost(city,product,quantity);
cout<<"Your cost is: "  <<totalcost;
}
float checkcost(string city,string product,int quantity)
{
    float cost;
  if(city=="sofia")
   {
     if(product=="coffee")
      {
        cost=quantity*0.50;
      }
    else if(product=="water")
      {
        cost=quantity*0.80;
      }
    else if(product=="beer")
      {
        cost=quantity*1.20;
      }
     else if(product=="sweets")
      {
        cost=quantity*1.45;
      }
     else if(product=="peanuts")
      {
        cost=quantity*1.60;
      }  
   }
 if(city=="plovdiv")
   {
     if(product=="coffee")
      {
        cost=quantity*0.40;
      }
    else if(product=="water")
      {
        cost=quantity*0.70;
      }
    else if(product=="beer")
      {
        cost=quantity*1.15;
      }
     else if(product=="sweets")
      {
        cost=quantity*1.30;
      }
     else if(product=="peanuts")
      {
        cost=quantity*1.50;
      }  
   }
     if(city=="varna")
   {
     if(product=="coffee")
      {
        cost=quantity*0.45;
      }
    else if(product=="water")
      {
        cost=quantity*0.70;
      }
    else if(product=="beer")
      {
        cost=quantity*1.10;
      }
     else if(product=="sweets")
      {
        cost=quantity*1.35;
      }
     else if(product=="peanuts")
      {
        cost=quantity*1.55;
      }  
   }

    return cost;
}