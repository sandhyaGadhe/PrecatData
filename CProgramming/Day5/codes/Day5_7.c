#include<stdio.h> 

int main( )
{
    // by default it is signed 
    char ch = 130; // 127 to -128  
    printf("%d",ch); //-126 
    return 0; 
}
/*
    -128 -127 -126 .... 0 1 2 3 4 5 6 .... 127 

    128 => -128 
    129 => -127 
    130 => -126 
*/