#include<stdio.h>
/*
        A or a => Android 
        b or B => Basic 
        c or C => C programming 
        d or D => Database 
*/ 
int main()
{
    char ch; 
    printf("Enter the character"); 
    ch = getchar( ); // a or A  
    switch(ch)
    {
        case 'a': 
        case 'A': 
        printf("Android"); 
        break; 

        case 'b': 
        case 'B': 
        printf("Basic"); 
        break; 

        case 'c': 
        case 'C': 
        printf(" C programming"); 
        break; 

        case 'd': 
        case 'D': 
        printf("Database "); 
        break; 

        default: 
        printf("invalid"); 
    }
    return 0;
}


