#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr = &num; // referencing 
    int **pptr = &ptr;  // pointer to pointer  
 //pptr is a pointer holding the address of integer pointer 
 //pptr is pointer which is pointing to a pointer to a integer    
    
    // printf("num = %d\n",num); //10 
    // printf("&num = %u\n",&num); //100
    // printf("ptr = %u\n",ptr); //100   
    
    printf("&ptr = %u\n",&ptr); //500 
    printf("pptr = %u\n",pptr); //500 
    
    printf("&pptr = %u\n",&pptr); //700 
    return 0;
}
/*
    int x = 1; 
    int *p = &x; // pointer 
    int **pp = &p; // pointer to pointer 
    int ***ppp = &pp; // pointer to pointer to pointer 

*/
