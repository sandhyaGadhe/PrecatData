#include<stdio.h> 
int main()
{
    // pointer arithmatic 
    int num = 10; 
    int *ptr = &num; 
    printf("&num = %u\n",&num); //100 
    printf("ptr = %u\n",ptr);  //100

    ptr = ptr + 1; 
    /*
               ptr + n=>  
                => ptr + n * scale factor of ptr 
                => 100 + 1 * 4  
                => 100 + 4
                => 104 
    */  
    printf("ptr + 1 = %u\n",ptr);//104  
    ptr--; 
    /*
            ptr = ptr - 1 
                = 104 - 1 * scale factor of ptr 
                = 104 - 1 * 4 
                = 104 - 4 
                = 100  
    */
    printf("ptr - 1 = %u\n",ptr);//100 
    printf("*ptr = %u\n",*ptr);//*100 => 10   
    return 0;
}
/*
        char ch = 'A' 
        char *cptr= &ch; 

        cptr = cptr + 10 
        cptr + 10 * scale factor of cptr 
        100  + 10 * 1 
        100 + 10 
        110 

        double dvar = 11.3; 
        double *dptr = &dvar; 
        dptr = dptr + 3
             = dptr + 3 * scale factor of dptr 
             = 100 + 3 * 8 
             = 100 + 24 
             = 124 
*/