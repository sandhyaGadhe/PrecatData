#include<stdio.h> 
int main()
{
    // ( , ) comma operator 
    int a;
    //a = 1,2,3; 
    //a =(1,2,3); 
    a =( ( 1,2),3); 
    // ( (2) , 3) ;
    //   3  
    printf("%d ",a); //3  
    return 0;
}
