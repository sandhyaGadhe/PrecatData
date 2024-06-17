#include<stdio.h> 
int sqr(int n); // global declaration 
int main()
{
    printf("res = %d",sqr(2)); 
    return 0;
}
int sqr(int n)
{
    return n * n; 
}

// //int sqr(int n); // global declaration 
// int main()
// {
//     int res; 
//     int sqr(int n); // local declaration 
//     res = sqr(2); 
//     printf("res = %d",res); 
//     return 0;
// }
// int sqr(int n)
// {
//     return n * n; 
// }

// int sqr(int n)
// {
//     return n * n; 
// }
// int main()
// {
//     int res; 
//     res = sqr(2); 
//     printf("res = %d",res); 
//     return 0;
// }

// int sqr(int n); 
// int main()
// {
//     int res; 
//     res = sqr(2); 
//     printf("res = %d",res); 
//     return 0;
// }
// int sqr(int n)
// {
//     return n * n; 
// }
