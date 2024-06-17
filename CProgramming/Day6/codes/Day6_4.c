#include<stdio.h> 
int main()
{
    // int num1 = 11; 
    // int num2 = 22;
    // int ans; 
    // ans = num1 && ++num2; 
    // //     T   &&  ++T
    // //         T 
    // printf("ans=%d num1=%d num2=%d",ans,num1,num2);    


    // int num1 = 0; 
    // int num2 = 0;
    // int ans; 
    // ans = num1 && ++num2; 
    // //     F   &&  XXX
    // //         F 
    // printf("ans=%d num1=%d num2=%d",ans,num1,num2);    


    // int num1 = 0; 
    // int num2 = 0;
    // int ans; 
    // ans = ++num1 && ++num2; 
    // //   ++F=>T  && ++F=>T
    // //          T 
    
    // printf("ans=%d num1=%d num2=%d",ans,num1,num2);    


    // int num1 = 0; 
    // int num2 = 0;
    // int ans; 
    // ans = ++num1 && num2++; 
    // //   ++F=>T  &&  F
    // //           F   
    
    // printf("ans=%d num1=%d num2=%d",ans,num1,num2);    


    // int num1 = 0; 
    // int num2 = 0;
    // int ans; 
    // ans = num1++ && num2++; 
    // //     F++   &&  XXX
    // //          F 
    
    // printf("ans=%d num1=%d num2=%d",ans,num1,num2);    


    // int num1 = 0; 
    // int num2 = 0;
    // int ans; 
    // ans = num1++ || num2++; 
    // //     F++   ||  F++ 
    // //           F
    
    // printf("ans=%d num1=%d num2=%d",ans,num1,num2);    


    int num1 = 0; 
    int num2 = 0;
    int ans; 
    ans = ++num1 || num2++; 
    //  ++F=> T  ||  XXX
    //           T    
    
    printf("ans=%d num1=%d num2=%d",ans,num1,num2);    
    
    return 0;
}
