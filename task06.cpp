#include <iostream>
using namespace std;
float money(int budget, string category, int group);
main()
{
    int budget, group;
    string category;
    cout << "Enter your budget: ";
    cin >> budget;
    cout << "Enter no of people: ";
    cin >> group;
    cout << "Enter your category: ";
    cin >> category;
    float moneyleft = money(budget, category, group);
    cout << moneyleft;
}
float money(int budget, string category, int group)
{
    float transport;
    float moneyleft;
    if (group >= 1 && group <= 4)
    {
        transport = budget - (budget * 75 / 100);
        if (category == "vip")
        {
            moneyleft = transport - group * 499.99;
        }
    }
    if (group >= 5 && group == 9)
    {
        transport = budget - (budget * 60 / 100);
        if (category == "vip")
        {
            moneyleft = transport - group * 499.99;
        }
    }
    if (group >= 10 && group == 24)
    {
        transport = budget - (budget * 50 / 100);
        if (category == "vip")
        {
            moneyleft = transport - group * 499.99;
        }
    }
    if (group >= 25 && group == 49)
    {
        transport = budget - (budget * 40 / 100);
        if (category == "vip")
        {
            moneyleft = transport - group * 499.99;
        }
    }
    if (group > 50)
    {
        transport = budget - (budget * 25 / 100);
        if (category == "vip")
        {
            moneyleft = transport - group * 499.99;
        }
    }
    if (group >= 1 && group <= 4)
    {
        transport = budget - (budget * 75 / 100);
        if (category == "normal")
        {
            moneyleft = transport - group * 249.99;
        }
    }
    if (group >= 5 && group <= 9)
    {
        transport = budget - (budget * 60 / 100);
        if (category == "normal")
        {
            moneyleft = transport - group * 249.99;
        }
    }
    if (group >= 10 && group <= 24)
    {
        transport = budget - (budget * 50 / 100);
        if (category == "normal")
        {
            moneyleft = transport - group * 249.99;
        }
    }
    if (group >= 25 && group <= 49)
    {
        transport = budget - (budget * 40 / 100);
        if (category == "normal")
        {
            moneyleft = transport - group * 249.99;
        }
    }
    if (group > 50)
    {
        transport = budget - (budget * 25 / 100);
        if (category == "normal")
        {
            moneyleft = transport - group * 249.99;
        }
    }

    if (moneyleft > 0)
    {
        cout << "you have left: ";
    }
    if (moneyleft < 0)
    {
        moneyleft=-1*moneyleft;
        cout << "You need: ";
    }
    return moneyleft;
}
