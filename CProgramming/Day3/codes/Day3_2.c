#include<stdio.h> 
int main()
{
    // int , char , double ( datatypes ) 
    int num =10; //variable declaration + initialization   
    char ch ='A';//variable declaration +  initialization     
    double dvar = 12.3; //variable declaration  + initialization      

    //printf is used to print string / data 
    //format specifiers 
    // int(%d), char(%c) , double(%lf)
    // printf("%d\n",num);//10 
    // printf("%c\n",ch);//A 
    // printf("%.2lf",dvar);


    printf("num = %d char = %c double = %.2lf",num,ch,dvar);     
    //      num = 10 char = A  double = 12.3    
    return 0;
}
/*
    int num = 10;
    //identifier is name given to variable 
    //num => identifier 
    //int num => variable  
*/
