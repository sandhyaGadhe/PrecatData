#include<stdio.h> 
int main()
{ 
    //logical operator (T or F )=> 0 or 1 
    // T => 1 
    // F => 0
    // && => logical AND 
    // || => logical OR 
    // ! => logical NOT 

 // Any non-zero values including (-ve) is considered as true     
 // 0 => false 

    // logical NOT ( ! )
    //printf("%d ",!10); // 0 
    // 10 => T => !T => F   

    //printf("%d ",!0);// !F => T ( 1 )

    //printf("%d ",!-10); // T => !T => F =>0  
    
    printf("%d ",!!0);// !!F => !T => F ( 0 )   
    return 0;
}
