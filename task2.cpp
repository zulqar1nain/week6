#include <iostream>
using namespace std;
float disamount(string day,string month,float amount);
main()
{
  string day,month;
  float amount;
  cout<<"Enter day: ";
  cin>>day;
  cout<<"Enter month: ";
  cin>>month;
  cout<<"Enter amount: ";
  cin>>amount;  
  int finalprize = disamount(day,month,amount);
  cout <<"Your amount after discount is: "  <<finalprize;

}
float disamount(string day,string month,float amount)
{
    int payableamount;
    if(day=="sunday"  && month=="october")
    {
        payableamount=amount-(amount*10/100);
    }
    else if(day=="sunday" && month!="october" )
    {
        payableamount=amount-(amount*5/100);
    }
     return payableamount;
  }