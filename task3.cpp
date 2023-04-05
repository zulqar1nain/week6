#include <iostream>
using namespace std;
main()
{
    string zodiac;
    int day;
    string month;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;

    if (day >= 21 || month == "march" && day <= 19 || month == "april")
    {
        cout<< "Aries";   
    }
    else if (day >= 20 || month == "april" && day <= 20 || month == "may")
    {
        cout<<"Taurus";
    }
    else if (day >= 21 || month == "may" && day <= 20 || month == "june")
    {
        cout<<"Gemini";
    }
    else if (day >= 21 || month == "june" && day <= 22 || month == "july")
    {
        cout<< "Cancer";
    }
    else if (day >= 23 || month == "july" && day <= 22 || month == "august")
    {
        cout <<"Leo";
    }
    else if (day >= 23 || month == "august" && day <= 22 || month == "september")
    {
        cout<<"Virgo";
    }
    else if (day >= 23 || month == "september" && day <= 22 || month == "october")
    {
        cout<<"Libra";
    }
    else if (day >= 23 || month == "october" && day <= 21 || month == "november")
    {
        cout<<"Scorpio";
    }
    else if (day >= 22 || month == "november" && day <= 21 || month == "december")
    {
        cout<<"Sagittarus";
    }
    else if (day >= 22 || month == "december" && day <= 19 || month == "january")
    {
        cout<< "Capricorn";
    }
    else if (day >= 20 || month == "january" && day <= 18 || month == "february")
    {
        cout<<"Aquarious";
    }
    else if (day >= 19 || month == "february" && day <= 20 || month == "march")
    {
        cout<<"Pisces";
    }
}