#include<stdio.h> 
int main( )
{
    char str1[5] = {'A','B','C','D','E'}; // init-list  
    //char array 
    
    char str2[5] = {'a','b','c','d','\0'}; 
    // 5 char array terminated with \0 => string

    char str3[5] = {'I','N','F','O'}; // partial init 
    // 5 char array terminated with \0 
    //when array is init partially rest ele are init to 0 
    /*
            I    N    F    O    0   
           [0]  [1]  [2]  [3]  [4]
           100  101  102  103  104   
    
    */  

    char str4[] = {'S','u','n','b','e','a','m'};
    //char array 

    //printf("%s",str3); 

    int i;
    for(i=0 ; i < 7 ; i++)
         putchar(str4[i]); 
 
    // for(i=0 ; i < 5 ; i++)
    //      putchar(str1[i]); 

    // for(i=0 ; str2[i]!='\0' ; i++)
    //      putchar(str2[i]); 

    // for(i=0 ; str3[i]!='\0' ; i++)
    //      putchar(str3[i]); 
    return 0;
}
