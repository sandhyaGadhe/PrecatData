#include<stdio.h> 
int main()
{
    // int ans; 
    // int a = 0; 
    // int b = 1; 
    // int c = 0; 
    // ans = a++ && b++   || c++; 
    // //    (a++ && b++) || c++; 
    // //    (F++ && XXX) ||
    // //         F       || F++ 
    // //              F    
    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 
    // //                              0 ,1,1,1  


    // int ans; 
    // int a = 1; 
    // int b = 1; 
    // int c = 0; 
    // ans = a++ && b++   || c++; 
    // //       opr1      || opr2 
    // //    (a++ && b++) || c++; 
    // //    (T++ && T++) ||
    // //         T       || XXX
    // //                 T    
    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 
    // //                              1 ,2,2,0  


    // int ans; 
    // int a = 1; 
    // int b = 1; 
    // int c = 0; 
    // ans = a++ || b++ && c++; 
    // //   opr1 || opr2   
    // //    a++ || (b++ && c++);
    // //    T++ ||   XXXX
    // //        T  
    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 
    // //                              1 ,2,1,0 

    // int ans; 
    // int a = 1; 
    // int b = 1; 
    // int c = 0; 
    // ans = a++ || b++ || c++; 
    // //    (a++ || b++) || c++;
    // //    (T++ || XXX) || 
    // //         T       || XXX
    // //                 T    
    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 
    // //                              1 ,2,1,0 

    int ans; 
    int a = 1; 
    int b = 1; 
    int c = 0; 
    ans = a++ && b++ && c++; 
    //         opr1    && opr2  
    //    (a++ && b++) && c++;
    //    (T++ && T++) && 
    //         T       &&  F++
    //                 F  
    printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 
    //                              0 ,2,2,1 
    
    
    return 0;
}
 