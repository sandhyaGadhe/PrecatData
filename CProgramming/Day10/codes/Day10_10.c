#include<stdio.h> 
void fun( ); 
void fun1( );
extern int num;   
int main()
{
    //extern int num; 
    printf("num = %d",num);
    fun( ); 
    fun1( ); 
    return 0;
}
void fun( )
{
    //extern int num; 
    printf("num = %d",num);
}
void fun1( )
{
    //extern int num; 
    printf("num = %d",num);
}
int num = 100; 
 
