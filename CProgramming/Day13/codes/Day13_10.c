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
    
    //printf("%d ",*arr); //1 
    /*
            *arr
            valueat(100)
            1 
    */ 
    //printf("%d ",*arr + 10); //11 
    /*
                *arr + 10 
                  1  + 10 
                  11 
    */
    printf("%d ",arr[-1]); 
    /*
              arr[-1]
              *(arr + -1)
              *(arr - 1)
              *(100 - 1)
              *(100 - 1 * 4)
              *(100 - 4 )
              *(96)
              valueat(96) 
              Garbage  
    
    */
    return 0;
}
