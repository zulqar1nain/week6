#include <iostream>
using namespace std;
main()
{
   string temp;
   string humidity;
   cout<<"Enter temperature: ";
   cin>>temp;
   cout<<"Enter Humidity: ";
   cin>>humidity;
   if(temp=="warm"  &&  humidity=="dry")
     {
        cout<<"play tennis";
     }
    else if(temp=="warm"  &&  humidity=="humid")
     {
        cout<<"Swim";
     }
     else if(temp=="cold"  &&  humidity=="dry")
     {
        cout<<"Play basketball";
     }
     else if(temp=="cold"  &&  humidity=="humid")
     {
        cout<<"Watch tv";
     }


}