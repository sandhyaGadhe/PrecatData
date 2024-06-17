#include<stdio.h> 
int main()
{
    // int num1 = 1; 
    // int num2 =2;
    // int ans; 
    // ans = num1 && num2; 
    // //     T   &&  T
    // //         T 
    // printf("ans=%d num1=%d num2=%d",ans,num1,num2);    
    
    // int num1 = 1; 
    // int num2 = 0;
    // int ans; 
    // ans = num1 && num2; 
    // //   (num1 && num2); 
    // //      T  &&  F
    // //         F
    // //         0  
    // printf("ans=%d num1=%d num2=%d",ans,num1,num2);    


    // int num1 = 0; 
    // int num2 = 1;
    // int ans; 
    // ans = num1 && num2; 
    // //   (num1 && num2); 
    // //      F  &&  XXX
    // //         F 
    // printf("ans=%d num1=%d num2=%d",ans,num1,num2);    


    // int num1 = 1; 
    // int num2 = 0;
    // int ans; 
    // ans = num1 || num2; 
    // //   (num1 || num2); 
    // //      T  ||  XX 
    // //        T
    // printf("ans=%d num1=%d num2=%d",ans,num1,num2);    
    
    int num1 = 0; 
    int num2 = 1;
    int ans; 
    ans = num1 || num2; 
    //   (num1 || num2); 
    //      F  ||  T 
    //        T
    printf("ans=%d num1=%d num2=%d",ans,num1,num2);    
    

    return 0;
}
