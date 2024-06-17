#include<stdio.h> 

int main( )
{
    //char ch = 'A'; // 65 => 65 ka binary ( 1 byte )
    char ch = 65; 
    //chars are internally integral constants (ASCII ) 

    //printf("%c ",ch); // 65 => A 
    //printf("%d ",ch); // 65  
    printf("%d",'A' - 65); // 0 
    //      65 - 65 
    return 0; 
}
/*
        A - Z => 65 to 90 
        a - z => 97 to 122 
*/