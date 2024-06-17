#include<stdio.h> 
void printArray(int *a); 
int main()
{   
    int i; 
    int arr[4]={100,200,300,400};
    printArray(arr); 
    printf("\n"); 
    for(i = 0 ; i < 4 ; i++)
        printf("%d ",arr[i]); 
    
    return 0;
}
void printArray(int *a)
{
    int i; 
    for(i = 0 ; i < 4 ; i++)
         printf("%d ",a[i]);//*(a + i)
    for(i = 0 ; i < 4 ; i++)
         a[i]++;   // a[0]++ => *(a + 1)++ =>*(500 + 1 )=>*(504)++    
}
