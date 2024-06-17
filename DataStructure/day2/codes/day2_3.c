// bubble sort
#include<stdio.h>
#define SIZE 6
#define SWAP(a,b) {int t=a; a=b;b=t;}
void bubble_sort(int arr[SIZE]);
void display(int arr[SIZE]);
void efficient_bubble_sort(int arr[SIZE]);

int main()
{
   // int arr[SIZE] = {30,20,60,50,10,40};
   int arr[SIZE] = {11,22,33,44,55,66};
     printf("Array before Sort \n");
    display(arr);
   // bubble_sort(arr);
   efficient_bubble_sort(arr);
    printf("\n Array After Sort \n");
    display(arr);


    return 0;
}

void bubble_sort(int arr[SIZE])
{
    int itr, pos;
    int iterations = 0, comparisons = 0;

    // iterations
    for(itr = 0; itr < SIZE - 1; itr++)
    {
        iterations++;
        // comparisons
        for(pos = 0; pos < SIZE-1-itr; pos++)
        {
            comparisons++;
            if(arr[pos] > arr[pos+1])
            {
                // swap
                SWAP(arr[pos],arr[pos+1]);
            }
        }

    }
    printf("\nIterations = %d comparisons = %d\n",iterations,comparisons);
}

void display(int arr[SIZE])
{
    for(int i = 0;i < SIZE;i++)
    {
        printf("%d\t",arr[i]);
    }
}

void efficient_bubble_sort(int arr[SIZE])
{
    int itr, pos,flag;
    int iterations = 0, comparisons = 0;

    // iterations
    for(itr = 0; itr < SIZE - 1; itr++)
    {
        flag = 0;
        iterations++;
        // comparisons
        for(pos = 0; pos < SIZE-1-itr; pos++)
        {
            comparisons++;
            if(arr[pos] > arr[pos+1])
            {
                // swap
                SWAP(arr[pos],arr[pos+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;

    }
    printf("\nIterations = %d comparisons = %d\n",iterations,comparisons);
}
