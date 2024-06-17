#include<stdio.h> 
int addition( int num1 , int num2); // function declaration 
int main() // user-defined function 
{
    
    int num1 = 10 , num2 = 20 , ans ; 
    ans = addition(num1,num2); // function call
    printf("ans = %d",ans); // 30 
    ans = addition(100,30);  //function call    
    printf("ans = %d",ans); //130 
    ans = addition(500,200);  // function call 
    printf("ans = %d",ans); //300  
    return 0;
}

int addition(int a ,int b) //user-defined function 
{
    // a,b,z are the local variables 
       int z;  
       z = a + b; 
       return z; 
}
// actual argument and formal type must be same 






