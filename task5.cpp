#include <iostream>
using namespace std;
float cost(string fruit, string day, float quantity);
main()
{
    string fruit, day;
    float quantity;
    cout << "Enter fruit name: ";
    cin >> fruit;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter quantity: ";
    cin >> quantity;
    float totalprice = cost(fruit, day, quantity);
    cout << "Your price: " << totalprice;
}
float cost(string fruit, string day, float quantity)
{
    float price;
    if (day == "sunday" && day == "saturday")
    {
        if (fruit == "banana")
        {
            price = quantity * 2.70;
        }
        if (fruit == "apple")
        {
            price = quantity * 1.25;
        }
        if (fruit == "orange")
        {
            price = quantity * 0.90;
        }
        if (fruit == "grapefruit")
        {
            price = quantity * 1.60;
        }
        if (fruit == "kiwi")
        {
            price = quantity * 3.00;
        }
        if (fruit == "pineapple")
        {
            price = quantity * 5.60;
        }
        if (fruit == "grapes")
        {
            price = quantity * 4.20;
        }
    }
    else
    {
        if (fruit == "banana")
        {
            price = quantity * 2.50;
        }
        if (fruit == "apple")
        {
            price = quantity * 1.20;
        }
        if (fruit == "orange")
        {
            price = quantity * 0.85;
        }
        if (fruit == "grapefruit")
        {
            price = quantity * 1.45;
        }
        if (fruit == "kiwi")
        {
            price = quantity * 2.70;
        }
        if (fruit == "pineapple")
        {
            price = quantity * 5.50;
        }
        if (fruit == "grapes")
        {
            price = quantity * 3.85;
        }
    }
    return price;
}