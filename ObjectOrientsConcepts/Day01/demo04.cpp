#include <iostream>

struct Time
{
    int hr;
    int min;

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
    printf("Using CPP - \n");
    struct Time t1;
    t1.acceptTime();
    t1.displayTime();
    return 0;
}