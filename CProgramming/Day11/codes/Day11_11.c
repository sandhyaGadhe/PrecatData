#include<stdio.h> 
int main()
{
    int num  = 10; 
    int num2 = 20; 
    int *ptr = &num; 

    printf("num  = %d\n",num); //10 
    printf("*ptr = %d\n",*ptr); //10 
    printf("ptr  = %u\n",ptr); //100
    printf("&num = %u\n",&num); //100 

    ptr = &num2;  
    printf("&num2 = %u\n",&num2); //700 
    printf("ptr = %u\n",ptr); // 700   

    printf("*ptr = %d\n",*ptr); //20 
    /*
            *ptr 
            valueat(ptr)
            valueat(700)
            20
    */
    *ptr = 30; 
    printf("*ptr = %d\n",*ptr); //30
    printf("num2 = %d\n",num2); //30  
    return 0;
}
