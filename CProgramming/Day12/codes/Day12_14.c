#include<stdio.h> 
int main()
{
    int num = 10; 
    const int *ptr = &num; 

    printf("num = %d\n",num); //10 
    printf("*ptr = %d\n",*ptr);// 10 

    //*ptr = 20; 
    num = 30; 
    printf("num = %d\n",num); 
    printf("*ptr = %d\n",*ptr);
    return 0;
}

// int main()
// {
//     const int num = 10; 
//     int *ptr = &num; 

//     printf("num = %d\n",num); //10 
//     printf("*ptr = %d\n",*ptr);// 10 

//     *ptr = 20; 
//     printf("num = %d\n",num); //10 
//     printf("*ptr = %d\n",*ptr);// 10 
//     return 0;
// }
