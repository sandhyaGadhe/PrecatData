#include<stdio.h>
//register int z = 500; // NOT OK  
int main()
{
    //storage => cpu register ( fast accessible )
    register int i; 
    printf("%d ",i); // Garbage 
    {
        register int i = 10; 
        printf("%d ",i); //10  
    }
    int x;  // local var => stack => process => RAM 
    printf("%u ",&x); // OK   
    //printf("%u ",&i); //NOT OK 
    
    // int u  = 10; 
    // register int *ptr = &u; // OK   
    
    //register int p = 10; 
    //int *k = &p; // NOT OK   

    return 0;
}
