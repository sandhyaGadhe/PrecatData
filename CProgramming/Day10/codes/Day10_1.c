#include<stdio.h> 
// function declaration ( type checking )
void display(int ); 
int accept_num(void); 
void addition(int  , int ); 

int main(  )
{
    int num1,num2;  
    num1 = accept_num( );// 4 
    num2 = accept_num( );// 2   
    addition(num1 , num2); 
    return 0;
}
//defination 
void display(int result)
{
    printf("result = %d",result); 
}
int accept_num(void)
{
     int num; 
     printf("Enter the number :: "); 
     scanf("%d",&num); 
     return num; 
}
void addition(int num1 , int num2)
{
    int result; 
    result = num1 + num2; 
    display(result); // function call 
}

//main => addition( ) => display( )
//main <= addition( ) <= display( )


