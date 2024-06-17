#include<stdio.h> 
int main()
{
    // printf("%d ",10 & 5); 
    // printf("%d ",10 | 5);
    // printf("%d ",10 ^ 5);

    // bitwise not ( ~ ) 
    printf("%d ",~10);//-(n+1) => -(10+1)=>-11 
    /*
            10 

         0000  1010    
        bitwise not (inverting the bits )

         1111  0101

         1s compliment => 0000  1010 
         2s compliment =>          1 
                          -----------
                          0000  1011 ( 11 ) => -11 

    */ 

    return 0;
}
