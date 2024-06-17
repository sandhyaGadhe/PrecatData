#include<stdio.h>
int main( void )
{
    
    //arrays 
     int arr[5]={1,2,3,4,5}; //init-list 
     
    /*
          array index starts from 0 to n-1   

        arr 

            1    2    3    4    5     
           [0]  [1]  [2]  [3]  [4]    
           100  104  108  112  116 

       
    */
  //The array name is treated as address of 0th element in 
  //any runtime expression.

  //name of array represents the base address 

    int index; 
    for(index = 0 ; index < 5 ; index++)
            printf("%u ",&arr[index]);

    printf("\n\n");
    int ans; 
    int *ptr1 = &arr[4]; //116 
    int *ptr2 = &arr[0]; //100   
    ans = ptr1 - ptr2; 
    /*
            ptr1 – ptr2 =>
                 (ptr1 – ptr2) / scale factor of ptr1
                 (116 – 100) / 4 
                   16 / 4 
                   4 
    */
    printf("%d",ans);     
    return 0;
}
