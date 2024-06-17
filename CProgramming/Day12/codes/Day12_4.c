#include<stdio.h>
int main()
{
    signed int x = -10;
    unsigned int y = 10,z;
    y = y >> 2;
    z = y > x ? !y : ~x ;
    printf("%u",z);
    return 0;
}