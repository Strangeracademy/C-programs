#include<iostream>
using namespace std;

class Time
{
    int hr, min;

public:
    void setTime()
    {
        cout << "Enter hours and minutes: ";
        cin >> hr >> min;
    }

    void display()
    {
        cout << hr << " hours " << min << " minutes";
    }

    friend void addTime(Time t1, Time t2);
};

void addTime(Time t1, Time t2)
{
    Time t3;

    t3.hr = t1.hr + t2.hr;
    t3.min = t1.min + t2.min;
    if(t3.min >= 60)
    {
        t3.hr += t3.min / 60;
        t3.min = t3.min % 60;
    }
    cout << "\nTotal Time = ";
    t3.display();
}
int main()
{
    Time t1, t2;

    cout << "Enter first time:\n";
    t1.setTime();

    cout << "Enter second time:\n";
    t2.setTime();

    addTime(t1, t2);

    return 0;
}

