#include <stdio.h>
int fun(void);
int main()
{
    int x;
    x = fun();
    printf("x = %d ", x);
    return 0;
}
int fun(void)
{
    int r;
    r = (1, 2, 3, 4);
    return r;
    //   int r;
    //   r = 1,2,3,4;
    //   return r;
    // return (10,20);
    // return 10,20;
    // return 10;
    // return 20;
}
