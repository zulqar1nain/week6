#include <iostream>
using namespace std;
float lowestprice(int km, string time);
main()
{
    int km;
    string time;
    cout << "Enter kilometre: ";
    cin >> km;
    cout << "Enter day/night: ";
    cin >> time;
    float totalprice = lowestprice(km, time);
    cout << "Your price : " << totalprice;
}
float lowestprice(int km, string time)
{
    float price;
    if (km >= 20 && km <= 100)
    {
        if (time == "day" || time == "night")
            price = km * 0.09;
    }
    if (km < 20)
    {
        if (time == "day")
        {
            price = km * 0.79 + 0.70;
        }
        if (time == "night")
        {
            price = km * 0.90 + 0.70;
        }
    }
    if (km > 100)
    {
        if (time == "day" || time == "night")
        {
            price = km * 0.06;
        }
    }
    return price;
} 