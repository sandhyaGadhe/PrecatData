#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;

public:
    Time()
    {
        hr = 10;
        min = 10;
    }

    // Mutator -> Setters
    void setMin(int min)
    {
        this->min = min;
    }

    // Inspector -> getters
    int getHr()
    {
        return hr;
    }

    // Facilitators
    void displayTime()
    {
        cout << "Time - " << hr << " : " << min << endl;
    }
};

int main()
{
    Time t1;
    t1.displayTime();
    // t1.min = 20;
    t1.setMin(20);
    // cout << t1.min << endl; // NOT OK
    t1.displayTime();
    // cout << "t1 hr - " << t1.hr << endl;
    cout << "t1 hr - " << t1.getHr() << endl;
    return 0;
}