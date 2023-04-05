#include <iostream>
using namespace std;
bool greaternumber(int n1,int n2,int n3);
main()
{
  int n1,n2,n3;
  cout<<"Enter number1: ";
  cin>>n1;
  cout<<"Enter number2: ";
  cin>>n2;
  cout<<"Enter number3: ";
  cin>>n3;
  greaternumber(n1,n2,n3);
}
bool greaternumber(int n1,int n2,int n3)
{
  if(n1==n2  &&  n2==n3   &&  n1==n3)
   {
    cout<<"YES";
   }
   else
   {
    cout<<"NO";
   }
  return 0;
}