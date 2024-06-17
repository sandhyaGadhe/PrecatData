#include<stdio.h>
#include<stdlib.h>  
int main()
{
    char line[256];
    FILE *fp; 
    char *p; 
    fp = fopen("file1.txt","r"); 
    if(fp==NULL)
    {
        printf("fopen ( ) failed"); 
        exit(1); 
    } 
    p = fgets(line,sizeof(line),p);//termiated on \n 
    printf("%s",p); 
    
    return 0;
}
