#include <iostream>
using namespace std;

int main()
{
    int time;
    cout << "Enter time : ";
    cin >> time;

    if (time >= 6 && time < 12)
    {
        cout << "Good morning";
    }
    else if (time >= 12 && time < 17)
    {
        cout << "Good afternoon";
    }
    else if (time >= 17 && time < 20)
    {
        cout << "Good evening";
    }
    else if ((time >= 20 && time <= 23) || (time >= 0 && time < 6))
    {
        cout << "Good night";
    }
    else
    {
        cout << "Invalid input";
    }

    return 0;
}