#include<stdio.h>
void fun(int *p); 
int main( void )
{
    int n = 10;
    printf("Before fun call :: %d \n",n); //10 
    fun(&n); 
    printf("After fun call :: %d \n",n);//11 
    return 0;
}
void fun(int *p)
{
    *p++; 
} 

// int main( void )
// {
//     int n = 10;
//     printf("Before fun call :: %d \n",n); //10 
//     fun(&n); 
//     printf("After fun call :: %d \n",n);//11 
//     return 0;
// }
// void fun(int *p)
// {
//         ++*p;  
// } 
