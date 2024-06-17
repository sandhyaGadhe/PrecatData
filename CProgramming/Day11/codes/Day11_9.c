#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr = &num; //declaration of pointer 
  
    printf("num = %d",num); //10 

    //dereference operator => * ( indirection operator )
    printf("\n *ptr = %d",*ptr); // dereferencing  
    /*
        *=> value-at-operator 
                
                *ptr
               valueat(ptr)
               valueat(100)
               10    
    
    */
    return 0;
}
