#include<stdio.h> 
int main()
{
    int *ptr; 
    float *fptr; 
    char *cptr; 
    double *dptr;
  /*
    Size of pointer variable is always same, 
    irrespective of its data type (as it stores 
    only the address)
  */
    /*
            32 bit compiler => 4 bytes 
            64 bit compiler => 8 bytes 
    
    */
    // pointer size    
    printf("%d",sizeof(ptr)); //4
    printf("%d",sizeof(cptr));//4 
    printf("%d",sizeof(dptr));//4 
    printf("%d",sizeof(fptr));//4   
    return 0;
}
