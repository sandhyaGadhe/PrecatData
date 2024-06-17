#include<stdio.h> 

int main( )
{
    // increment / decrement operator (++ , --)
    /*
            increment => ++
             ( increments the value by 1 ) 
            decrement => -- 
             ( decrements the value by 1 ) 

    */
    // int ans; 
    // int num = 2; 
    // ans = num; 
    // printf("%d %d ",ans,num); // 2  2 

    // int ans; 
    // int num = 2; 
    // ans = ++num; // pre-increment 
    // printf("%d %d ",ans,num); // 3  3 

    // int ans; 
    // int num = 2; 
    // ans = num++; // post-increment 
    // printf("%d %d ",ans,num); //  2 3 

    // int ans; 
    // int num = 2; 
    // ans = --num; // pre-decrement
    // printf("%d %d ",ans,num); //  1 1 

    int ans; 
    int num = 2; 
    ans = num--; // pre-decrement
    printf("%d %d ",ans,num); //  2 1 
    
    return 0; 
}
/*
        num = num + 1; 
        num+=1; 
        num++ 
        ++num

*/