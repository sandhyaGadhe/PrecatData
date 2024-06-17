#include <stdio.h>

struct Time
{
    int hr;
    int min;
};

void acceptTime(struct Time *t)
{
    printf("Enter the hr and mins - ");
    scanf("%d%d", &t->hr, &t->min);
}

void displayTime(struct Time *t)
{
    printf("Time - %d : %d", t->hr, t->min);
}

int main()
{
    struct Time t1;
    acceptTime(&t1);
    displayTime(&t1);
    return 0;
}