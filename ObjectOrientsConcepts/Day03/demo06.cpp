#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;

public:
    // constructor
    Time()
    {
        cout << "Inside constructor" << endl;
        hr = 10;
        min = 10;
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
};

int main()
{
    Time t1;
    t1.displayTime();
    Time t2;
    t2.displayTime();
    return 0;
}