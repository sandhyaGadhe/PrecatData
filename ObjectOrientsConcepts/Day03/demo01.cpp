#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;

public:
    void acceptTime() // acceptTime(Time *const this)
    {
        cout << "Enter hrs and mins - ";
        cin >> this->hr >> min;
    }
    void displayTime() // displayTime(Time *const this)
    {
        cout << "Time - " << hr << " : " << this->min << endl;
    }
};

int main()
{
    Time t1;          // object
    t1.acceptTime();  // acceptTime(&t1);
    t1.displayTime(); // displayTime(&t1)
    return 0;
}