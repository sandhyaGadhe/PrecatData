#include<stdio.h> 
int addition( int num1 , int num2); // function declaration 
int main() // user-defined function 
{
    //num1 and num2 are called as local variables 
    int num1 = 10 , num2 = 20 , ans ; 
    ans = addition(num1,num2); // function call
    //num1 and num2 are called as actual argument  
    printf("ans = %d",ans); // 30 
    return 0;
}
// main function => calling function 
// addition function => called function 

//actual arguments are copied into formal arguments 

//function defination 
// a and b are called as formal arguments 
int addition(int a ,int b) //user-defined function 
{
    // a,b,z are the local variables 
       int z;  
       z = a + b; // 30 
       return z; 
}







