#include <iostream>
using namespace std;
main()
{
    int starthour, startmin, totalminstart, totalmin, hourmin;
    int arrivehour, arrivemin, totalminarrive, hour, min;
    string time;
    cout << "Enter starting time(hour): ";
    cin >> starthour;
    cout << "Enter starting time(min): ";
    cin >> startmin;
    cout << "Enter arrival time(hour): ";
    cin >> arrivehour;
    cout << "Enter arrival time(min): ";
    cin >> arrivemin;
    totalminstart = starthour * 60 + startmin;
    totalminarrive = arrivehour * 60 + arrivemin;
    totalmin = totalminarrive - totalminstart;
    hour = totalmin / 60;
    min = totalmin % 60;
    if (totalmin > 60)
    {

        cout << hour << ":" << min;
    }
    if (totalminarrive > totalminstart)
    {
        cout << "Late" << hour << ":" << min;
    }
    else if (totalminarrive < totalminstart)
    {
        hour =-1* (totalmin / 60);
        min = -1 * (totalmin % 60);
        cout << "To early" << hour << ":" << min;
    }
    if (totalmin < 60)
    {
        if (totalminarrive == totalminstart)
        {
            cout << "On time" << totalmin;
        }
    }
}