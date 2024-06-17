#include<stdio.h> 

int main( )
{
    //arithmatic operators 
    // + , - , * , % , / 
    // binary operators 

    // / => quotient 
    //printf("%d ",1234 / 10 ); 
    
    // % => remainder => modulus operator 
    // % operator works with only int types 
    //printf("%d ",1234 % 10); // 4 
    
    // % operator takes sign of numerator 
    printf("%d ",4 % 3); // 1 
    printf("%d ",-4 % 3); //-1
    printf("%d ",4 % -3); //1
    printf("%d ",-4 % -3); //-1 
    return 0; 
}
