#include<stdio.h> 
void readArray(int arr[]); 
void printArray(int arr[]); 
int main()
{
    int arr[5]; // sizeof(arr) => 20 
    printf("Enter the array elements :: "); 
    readArray(arr); // base address 
    printf("Array elements are :: "); 
    printArray(arr); //base address 
    return 0;
}
void printArray(int arr[])
{
    //printf("\n %d ",sizeof(arr)); // 4 bytes (size of a pointer )
    int i; 
    for(i = 0 ; i < 5 ; i++)
         printf("%d",arr[i]);//*(arr + i) 
}
void readArray(int *ptr) // pointer notation 
{
    //printf("\n %d ",sizeof(ptr)); // 4 bytes (size of a pointer )
    int i; 
    for(i = 0 ; i < 5 ; i++)
         scanf("%d",&ptr[i]); 
}