#include<stdio.h>
int main( void )
{
    //int n1=1,n2=2,n3=3,n4=4,n5=5; 

    //arrays 
    int arr[5]={1,2,3,4,5}; //init-list 
    /*
          array index starts from 0 to n-1   

        arr 

            1    2    3    4    5     
           [0]  [1]  [2]  [3]  [4]    
           100  104  108  112  116 

       //array notation  
       arr[0] => 1  
       arr[2] => 3  
       arr[4] => 5  
    */
    //printf("%d %d %d",arr[0],arr[2],arr[4]);  
    
    int index; 
    for(index = 0 ; index < 5 ; index++)
            printf("%d ",arr[index]); 
    
    return 0;
}