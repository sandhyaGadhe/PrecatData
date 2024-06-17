#include<stdio.h> 
int main()
{
    /*
        type modifiers 
        signed 
        unsigned 
        short 
        long 
    */
    int num = -2147483648; // 4 bytes ( 32 bits )
    // signed int num = -10; 
    //by default it is considered as signed 
    /*
            int => 4 bytes ( 32 bits )
            (2 to the power 32 - 1 ) - 1
            2147483647 => max range  
            -2147483648 => min range 
    
    */
    printf("num = %d",num);  
    return 0;
}
