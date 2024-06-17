#include<stdio.h> 
void printArray(int *a); 
int main()
{   
    int i; 
    int arr[4]={1,2,3,4};
    //arr++; // NOT OK 
    printArray(arr); 
    return 0;
}
void printArray(int arr[]) // base address => 100 
{
    printf("%d ",*arr); //1 
    arr++; // pointer arithmatic => 100=> 104 
    printf("%d ",*arr); //2   => *104 => 2 
    printf("%d ",arr[-1]);//1 
    /*
            arr[-1]
            *(arr + -1)
            *(arr - 1)
            *(104 - 1)
            *(104 - 1 * 4)
            *(104 -4)
            *(100)
             1 
    */
}
