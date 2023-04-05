#include <iostream>
using namespace std;
main()
{
    char type, time;
    int min;
    int inmin;
    float charges;
    cout << "Enter your type: ";
    cin >> type;
    cout << "Enter time day/night: ";
    cin >> time;
    cout << "Enter number of minutes: ";
    cin >> min;
    if (type == 'P')
    {
        if (time == 'D')
        {
            if (min <= 75)
            {
                charges = 25;
                cout << "Your charges is: "  <<charges;
            }
            else if (min > 75)
            {
                inmin = min - 75;
                charges = 25 + (0.10 * inmin);
                cout << "Your charges is: "   <<charges;
            }
        }
        if (time == 'N')
        {
            if (min <= 100)
            {
                charges = 25;
                cout << "Your charges is: "  <<charges;
            }
            if (min > 100)
            {
                inmin = min - 100;
                charges = 25 + (0.05 * inmin);
                cout << "Your charges is: " <<charges;
            }
        }
    }
    if (type == 'R')
    {
        if (min <= 50)
        {
            charges = 10;
            cout << "Your charges is: " <<charges;
        }
        if (min > 50)
        {
            inmin = min - 50;
            charges = 10 + (0.20 * inmin);
            cout << "Your charges is: " <<charges;
        }
    }
}