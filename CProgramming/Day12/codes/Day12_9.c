#include<stdio.h> 
void fun(int **p); 
int main()
{
    int n = 10;
    int *ptr = &n;  
    printf("inside the main function :: %d  \n",n);//10
    fun(&ptr);  
    printf("inside the main function :: %d  \n",n);//20 
    return 0;
}
void fun(int **p)
{
       **p = **p + 10;  
}

// int main()
// {
//     int n = 10; 
//     printf("inside the main function :: %d  \n",n);//10
//     fun(&n);  
//     printf("inside the main function :: %d  \n",n);//20 
//     return 0;
// }
// void fun(int *p)
// {
//         *p = *p + 10; 
// }
