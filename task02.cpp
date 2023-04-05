#include <iostream>
using namespace std;
main()
{
  string subject1,subject2,subject3,subject4,subject5;
  int marks1,marks2,marks3,marks4,marks5;
  float percentage;
  string name;
  int totalmarks;
  string grade;
  cout<<"Your name: ";
  cin>>name;
  cout <<"English:";
  cin>>marks1;
  cout <<"MATHS: ";
  cin>>marks2;
  cout<<"Chemistry: ";
  cin>>marks3;
  cout<<"Social science: ";
  cin>>marks4;
  cout<<"Biology: ";
  cin>>marks5;
  totalmarks=marks1+marks2+marks3+marks4+marks5;
  cout<<"total marks: "  <<totalmarks  <<endl;
  percentage=(totalmarks*100)/500;
  cout <<"percentage: "   <<percentage  <<endl;
  if(percentage>=90  &&  percentage<=100)
  {
     grade="A+";
     cout <<"Your grade is: "  <<grade;
  }
if(percentage>=80  &&  percentage<=90)
  {
     cout<<"A";
     cout <<"Your grade is: "  <<grade;
  }
  if(percentage>=70  &&  percentage<=80)
  {
     grade="B+";
     cout <<"Your grade is: "  <<grade;
  }
  if(percentage>=60  &&  percentage<=70)
  {
     grade="B";
     cout <<"Your grade is: "  <<grade;
  }
  if(percentage>=50  &&  percentage<=60)
  {
     grade="C";
     cout <<"Your grade is: "  <<grade;
  }
  if(percentage>=40  &&  percentage<=50)
  {
     grade="D";
     cout <<"Your grade is: "  <<grade;
  }
  if (percentage<40)
  {
     grade="F";
     cout <<"Your grade is: "  <<grade;
  }
  
  return 0;
}