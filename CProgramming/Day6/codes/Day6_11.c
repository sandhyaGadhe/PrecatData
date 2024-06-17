#include<stdio.h>
/*
        I/P a char 
        char => uppercase , lowercase , digit , special char 

        A - Z => 65 to 90 
        a - z => 97 to 122 
        0 - 9 => 48 to 57 
*/ 
int main()
{
    char ch; 
    //Input 
    printf("Enter the character"); 
    //scanf("%c",&ch);    
    ch = getchar( );  

    if(ch>=97 && ch<=122)
       printf("Lowercase"); 
    else 
    {
        if(ch>=65 && ch<=90)
            printf("Uppercase"); 
        else 
        {
             if(ch>=48 && ch<=57) 
                printf("Digit");  
            else 
                printf("Special symbol");  
        } 
    }
      
    return 0;
}
