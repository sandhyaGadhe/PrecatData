#include<stdio.h> 

int main( )
{
    int number; //variable declaration
    int roll = 100; //variable decln + init  
    /*
           double basic_salary = 1000.00; 
           double total_salary = 2000.00;  
    */
    double basic_salary = 1000.00 , total_salary = 2000.00; //variable decln + init
    number = 10; //assignment operation 
    printf("Variables and datatypes ...\n"); 
    number = 20; //assignment 
    printf("number = %d\n",number); //20 
    char ch = 'A'; //variable decln + init 
    printf("%.2lf %.2lf\n",basic_salary,total_salary); 
    printf("%d %d %.2lf %.2lf\n",roll,number,basic_salary,total_salary); 
    printf("char = %c",ch); 
    return 0; 
}
