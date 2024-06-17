#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr = &num; //declaration of pointer 
    
    num = 20; 
    printf("num = %d\n",num); //20 
    printf("*ptr = %d\n",*ptr); //20 
    /*
                *ptr 
                valueat(ptr)
                valueat(100)
                20 

    */ 
    *ptr = 30;
    /*
            *ptr 
            valueat(ptr)
            valueat(100)
                    ======> 30 

    
    */
    printf("num = %d\n",num); //30 
    printf("*ptr = %d\n",*ptr);//30  
    /*
            *ptr 
            valueat(ptr)
            valueat(100)
            30 
    */
    *ptr = 40; 
    printf("num = %d\n",num); //40 
    printf("*ptr = %d\n",*ptr);//40 

    *ptr = *ptr + 10; 
    //       40 + 10
    // *ptr = 50 
    // valueat(ptr)
    // valueat(100) ===> 50 

    printf("num = %d\n",num); //50 
    printf("*ptr = %d\n",*ptr);//50  

    return 0;
}
