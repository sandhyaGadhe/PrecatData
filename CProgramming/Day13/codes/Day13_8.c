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
    
    
    printf("%d ",arr[0]); //1 ( array notation ) 

    printf("%d ",*(arr+0) ); //1 ( pointer notation )
    /*
            arr[1]        =========>    *(arr + 1 )
          array notation                pointer notation

            arr[i]   ====> *(arr + i)
            arr[3]   ===> *(arr + 3)
            arr[4]   ===> *(arr + 4)   
    */ 
    return 0;
}
