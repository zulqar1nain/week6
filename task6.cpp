#include <iostream>
using namespace std;
main()
{
    string month, room;
    float stay;
    float discount, amount;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter stay: ";
    cin >> stay;

    if (month == "may" || month == "october")
    {
        if (stay >= 14)
        {
            amount = stay * 65;
            discount = amount - (amount * 10 / 100);
            cout << "Apartment: " << discount;
        }
    }
    if (month == "june" || month == "september")
    {
        if (stay >= 14)
        {
            amount = stay * 68.70;
            discount = amount - (amount * 10 / 100);
            cout << "Apartment: " << discount;
        }
    }
    if (month == "july" || month == "august")
    {
        if (stay >= 14)
        {
            amount = (stay * 77);
            discount = amount - (amount * 10 / 100);
            cout << "Apartment: " << discount;
        }
    }
    if (month == "may" || month == "october")
    {
        if (stay > 7 && stay < 14)
        {
            amount = (stay * 50);
            discount = amount - (amount * 5 / 100);
            cout << "studio: " << discount;
        }
        if (stay >= 14)
        {
            amount = (stay * 50);
            discount = amount - (amount * 30 / 100);
            cout << "studio: " << discount;
        }
    }
    if (month == "june" || month == "september")
    {
        if (stay >= 14)
        {
            amount = (stay * 75.20);
            discount = amount - (amount * 20 / 100);
            cout << "studio: " << discount;
        }
    }
    if (month == "july" || month == "august")
    {
        discount = (stay * 76);
        cout << "studio: " << discount;
    }
}
