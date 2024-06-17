#include<stdio.h> 
int main()
{
    int x; //variable declaration 
    int num = 10; //variable declaration + init  
    printf("num = %d",num); //10 
    num = 50; //assignment 
    printf("num = %d",num); //50 
    num = -1; 
    num = 22; 
    printf("num = %d",num); //22  
    num = 300; 
    printf("num = %d",num); //300 

    //assignment can be done multiple number of times 
    /*
            int x = 10; 
            x = 30; // OK // Assignment   
            x = 50; // OK // Assignment 
    */
   /*
        Initialization can be done only once 
        int x = 10;
        int x = 10; // NOT OK 
   */
    return 0;
}
