#include<stdio.h> 
int main( )
{
    // printf("%d ",sizeof(10.33)); // double => 8 bytes 
    // printf("%d ",sizeof(10.33f));// float => 4 bytes 
    // printf("%d ",sizeof(10.33F));// float => 4 bytes  

    char ch; 
    //printf("%d ",sizeof(ch)); // 1 byte 
    //printf("%d ",sizeof('A'));// 4 bytes  
    //char const => int 

    //printf("%d ",sizeof(100l));// 4 bytes 
    //printf("%d ",sizeof(100L));// 4 bytes 

    printf("%d ",sizeof(100u));// 4 bytes 
    printf("%d ",sizeof(100U));// 4 bytes  
    return 0;
}
