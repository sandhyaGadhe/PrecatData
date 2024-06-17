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
    
    
    //int *ptr = &arr[0]; 
    int *ptr = arr;  // pointer to 1d array 
    //printf("%u ",arr); // 100
    
    printf("%u ",ptr); // 100

    printf("%u ",ptr+1); //104 
    /*
            ptr + 1 
            ptr + 1 * scale factor of ptr 
            100 + 1 * 4 
            100 + 4 
            104 
    */
    printf("%u ",ptr+2); //108 
    /*
            ptr + 2 
            ptr + 2 * scale factor of ptr
            100 + 2 * 4 
            100 + 8 
            108 
    */ 
     printf("%u ",ptr+3); //112 
    /*
            ptr + 3 
            ptr + 2 * scale factor of ptr
            100 + 3 * 4 
            100 + 12 
            112  
    */ 
    return 0;
}
