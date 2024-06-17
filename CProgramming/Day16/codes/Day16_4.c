#include<stdio.h> 
int* fun( );
int main()
{
    int *x; 
    x = fun( ); // dangling pointer 
    printf("%d",*x); 
    return 0;
}
int* fun( )
{
    static int n  = 10; 
    return &n; 
}

// int* fun( );
// int main()
// {
//     int *x; 
//     x = fun( ); // dangling pointer 
//     printf("%d",*x); 
//     return 0;
// }
// int* fun( )
// {
//     int n  = 10; 
//     return &n; 
// }
