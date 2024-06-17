#include<stdio.h> 
int main()
{
    //int a; 
    //printf returns the count on terminal 
    //a = printf("Sunbeam info ");     
    //printf("\n %d",a); //13 

    //\n \b \r \t => count => 1 
    //a = printf("\n\tSunbeam info");     
    //printf("\n %d",a); //14 
    
    // int ans = 10; 
    // int a; 
    // a = printf("ans = %d",ans);
    // //          ans = 10 
    // printf("\n %d",a); // 8 

    int a = 10; 
    int ans; 
    a = printf(" %10d ",a) + ++a; 
    //  - - - - - - - - - - 
    //          12         +  11 
    //                  23 
    printf("\n %d",a); //23  
    return 0;
}


