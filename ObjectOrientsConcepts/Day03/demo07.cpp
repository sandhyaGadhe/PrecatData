#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;

public:
    // paramterless constructor
    Time()
    {
        cout << "Inside Parameterless constructor" << endl;
        hr = 10;
        min = 10;
    }

    // parameterized ctor
    Time(int hr, int min) // this
    {
        cout << "Inside Parameterized constructor" << endl;
        this->hr = hr;
        this->min = min;
    }

    void acceptTime()
    {
        cout << "Enter hrs and mins - ";
        cin >> hr >> min;
    }
    void displayTime()
    {
        cout << "Time - " << hr << " : " << min << endl;
    }

    // Destructor
    ~Time()
    {
        cout << "Inside Dtor" << endl;
        displayTime();
    }
};

int main()
{
    Time t1;
    t1.displayTime();
    Time t2(11, 25);
    t2.displayTime();
    cout << "Dtor call - " << endl;
    return 0;
}
POP->C

    OOP->CPP