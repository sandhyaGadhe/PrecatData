#include<stdio.h> 
int main()
{
    int num = 10; 
    int num2 = 20; 
    int * const ptr = &num; 
 //ptr is a constant pointer pointing to non-constant integer variable    
    //int * ptr const = &num; // NOT OK  
    printf("num = %d\n",num); // OK 
    printf("*ptr = %d\n",*ptr); // OK 
    *ptr = 20;  
    printf("num = %d\n",num); // OK 
    printf("*ptr = %d\n",*ptr); // OK
    
    //ptr = &num2; // NOT OK 
    
    return 0;
}
