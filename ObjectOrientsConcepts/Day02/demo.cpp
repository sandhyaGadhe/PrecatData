#include <iostream>

struct Time
{
private:
    int hr;
    int min;

public:
    void acceptTime()
    {
        printf("Enter the hr and mins - ");
        scanf("%d%d", &hr, &min);
    }

    void displayTime()
    {
        printf("Time - %d : %d", hr, min);
    }
};

int main()
{
    struct Time t1;
    // t1.hr = 10; // NOT OK
    t1.acceptTime();
    t1.displayTime();
    return 0;
}