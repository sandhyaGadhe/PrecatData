#include<stdio.h>
//int arr[3][3]; // 0 
int main()
{
    //2D array 
     int arr[3][3]={1,2,3,4,5,6,7,8,9};
    
      
    /*
            arr 
                    [0]     [1]     [2]
    
           [0]       1       2       3   
           100      100     104     108     

           [1]       4       5       6
           112     112      116     120 

           [2]       7       8       9 
           124     124      128     132 

        
    */ 
    
    
    int row,col; 

    for(row = 0 ; row < 3 ; row++)
    {
        for(col = 0 ; col < 3 ; col++)
        {
            printf("%u ",&arr[row][col]); 
        }
        printf("\n"); 
    }
    printf("\n\n"); 
    // name of array represents base address 
    //base address
    
    //printf("%d ",*arr + 1); //104 
    //printf("%d ",*(*arr + 1) ); //*104 => 2   
    printf("%d ",*(*arr + 1) + 100 ); //2 + 100 => 102  
    return 0;
}
