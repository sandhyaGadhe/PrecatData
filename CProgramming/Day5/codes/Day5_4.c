#include<stdio.h> 
int main()
{
    int a; 
    float b; 
    a = 23 / 5;//(int / int)=>(int) 
    /*
            RHS => int 
            LHS => int    
            RHS => 4.6 => 4 

    */
    //printf("%d ",a); // 4 
    
    b = 23 / 5; //(int / int) => (int)
    // RHS => int 
    // LHS => float
    //  4.00f<=4 
    //printf("%.2f",b); // 4.00 
    
    b = 23.0f / 5; // (float) / (int) => float 
    // RHS =>float 
    // LHS =>float 
    // b<=4.6 
    printf("%.2f",b); // 4.60 

    return 0;
}
/*
    if 2 operands are of diff type than smaller 
    type is promoted to larger type for calculation 
    
    double
    float 
    int 
    char 

    int + int => int 
    int + double => double 
    double + float => double 
    char * int => int 
    short / int => int 
    int / float => float 

  char and short are promoted to "int " for arithmatic 
  calculation 
        char + char => int 
        short + short => int 
        char + short => int   

        typecasting 
        (float)23 => 23 is a integer but consider it as a 
        float for this calculation 

*/