#include<stdio.h> 
int main()
{
    //sizeof() is a operator 
    //sizeof() is a compile time operator 
    int num = 4; 
    char ch = 'A'; 
    double d1; 
    short s1; 
    // printf("%d ",sizeof(1 + 2)); // 4 bytes 
    // printf("%d ",sizeof(num + ch)); // 4 bytes      
    // printf("%d ",sizeof(10.33 + 'A')); // 8 bytes      
    // printf("%d ",sizeof(10.33f + 'A')); // 4 bytes   
    
    //printf("%d ",sizeof(s1 + ch)); // 4 bytes  
    
    int x = 1; 
    printf("%d ",sizeof(x = x + 1)); // 4 bytes 
    printf("\n %d",x); //1 
    
    return 0;
}
