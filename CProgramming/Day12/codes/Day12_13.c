#include<stdio.h> 
int main()
{
    const int num = 10;
    const int num2 = 10;
    int const * const ptr = &num;
//ptr is a constant pointer pointing to constant integer variable       
    
    printf("num = %d",num); 
    printf("*ptr = %d",*ptr);
    //num = 20; // NOT OK 
    //*ptr = 30;  // NOT OK 
    //ptr = &num2; // NOT OK  
    return 0;
}
