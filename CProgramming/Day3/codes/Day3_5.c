#include<stdio.h> 

int main( )
{
    //sizeof() => operator => bytes ( integer => %d ) 
    int num =10; // 4 bytes 
    char ch = 'A'; // 1 bytes  
    double dvar = 12.3; // 8 bytes 
    float fvar = 11.33; 
    printf("%d ",sizeof(num));// 4 bytes  
    printf("%d ",sizeof(ch));// 1 byte 
    printf("%d ",sizeof(dvar));// 8 bytes  
    printf("%d ",sizeof(fvar));// 4 bytes  
    return 0; 
}
/*
        Number system 
        Decimal number system 
        Binary number system 
        octal number system 
        hexadecimal system 

        conversions 
        1s Compliment 
        2s Compliment 
        Binary addition 




*/