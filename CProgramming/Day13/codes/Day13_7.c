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
    
    printf("%d ",*(arr+0) ); //1 
    /*
            *(arr + 0 )
            *(100 + 0)
            *(100 + 0 * 4)
            *(100)
            valueat(100)
            1 
    */
    printf("%d ",*(arr+1) ); //2 
    /*
            *(arr + 1)
            *(100 + 1)
            *(100 + 1 * 4)
            *(100 + 4)
            *(104)
            valueat(104)
            2 
    */
    printf("%d ",*(arr+2) );//3 
    /*
            *(arr + 2)
            *(100 + 2)
            *(100 + 2 * 4)
            *(100 + 8)
            *(108)
            valueat(108)
            3 
    
    */
    printf("%d ",*(arr+3) );//4  
    return 0;
}
