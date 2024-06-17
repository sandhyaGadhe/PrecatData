#include<stdio.h> 
int main()
{
    char ch = 'A'; 
    char *cptr = &ch; 
    char **cpptr = &cptr;  

    // printf("%d ",sizeof(ch)); //1 
    // printf("%d ",sizeof(cptr));//4 bytes ( 4 / 8 )
    // printf("%d",sizeof(*cptr)); // scale factor => 1   
    
    printf("%d ",sizeof(cpptr));// 4 bytes  
    printf("%d ",sizeof(*cpptr));// 4 bytes 
    printf("%d ",sizeof(**cpptr));// 1 byte  
    return 0;
}
