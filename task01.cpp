#include <iostream>
using namespace std;
string name(char gender,int age);
main()
{
    char gender;
    int age;
    cout<< "Enter your gender: ";
    cin>>gender;
    cout<< "Enter your age: ";
    cin>>age;
    string person = name(gender,age);
    cout <<" "  << person;
}
string name(char gender,int age)
{
   string all;
   if(gender=='m' && age>=16)
   {
     all ="Mr";
   }
   if(gender=='m' && age<16)
   {
     all ="Master";
   }if(gender=='f' && age>=16)
   {
     all ="Ms";
   }if(gender=='f' && age>=16)
   {
     all ="Miss";
   }
   return all;
}