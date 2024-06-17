#include <iostream>
using namespace std;

class Time
{
    // data members
    int hr;
    int min;

public:
    // member functions
    void acceptTime()
    {
        cout << "Enter hr and mins - ";
        cin >> hr >> min;
    }

    void displayTime()
    {
        cout << "Time - " << hr << " : " << min << endl;
    }
};

int main()
{
    Time t1; // object of the Time class
    t1.acceptTime();
    t1.displayTime();

    Time t2; // object of the Time class
    t2.acceptTime();
    t2.displayTime();
    return 0;
}