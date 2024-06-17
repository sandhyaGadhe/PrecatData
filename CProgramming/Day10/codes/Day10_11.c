#include<stdio.h> 
static int num1 = 100; // (file scope) 
int x = 20; // (program scope )
int main()
{
    static int num = 10;//(block-scope) data-section  
    return 0;
}
void fun( )
{    
    static int z = 100; // block scope 
    //printf("num = %d",num); // NOT OK 
    printf("num = %d",num1); // OK 
}

/*
    int x;(program scope)  
    static int num1(file scope)
    main.c                           f1.c               f2.c  

            gcc main.c f1.c f2.c 
            a.exe 
*/