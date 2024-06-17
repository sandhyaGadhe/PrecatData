#include<stdio.h> 
int main()
{
    //char ch = 'A';  // signed 
    //signed char ch = 127; 
    /*
            char => 1 byte ( 8 bits )
            ( 2 to the power 8 - 1 ) - 1 
            ( 2 to the power 7 ) - 1
            128 - 1 
            127 => max range 
            -128 => min range   
    */
    //printf("%d ",ch); // 127 
    
    unsigned char ch1 = 255 ; 
    /*
              size => 1 byte 
              1 byte => 8 bits 
              ( 2 to the power 8  ) - 1 
                256 - 1 
                255 => max range 

    
    */ 
    printf("%u ",ch1); 
    return 0;
}

