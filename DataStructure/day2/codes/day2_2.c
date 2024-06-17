// selection sort
#include<stdio.h>
#define SIZE 6
#define SWAP(a,b) {int t=a; a=b;b=t;}
void selection_sort(int arr[SIZE]);
void display(int arr[SIZE]);
int main()
{
  //  int arr[SIZE] = {30,20,60,50,10,40};
  int arr[SIZE] = {11,22,33,44,55,66};
    printf("Array before Sort \n");
    display(arr);
    selection_sort(arr);
    printf("\n Array After Sort \n");
    display(arr);

    return 0;
}

void selection_sort(int arr[SIZE])
{
    int sel_pos,pos;
    int iterations = 0,comparisons = 0;
    // Iterations / passes
    for(sel_pos = 0; sel_pos < SIZE-1;sel_pos++)
    {
        iterations++;
        // comparisons
        for(pos = sel_pos+1; pos < SIZE; pos++)
        {
            comparisons++;
            if(arr[sel_pos] > arr[pos]) 
            {
                // swap
                SWAP(arr[sel_pos],arr[pos]);
                /*
                    int t = arr[sel_pos];
                    arr[sel_pos] = arr[pos];
                    arr[pos] = t;
                
                */
            }

        }
    }
    printf("\n Iterations = %d comparisons = %d\n",iterations,comparisons);
}

void display(int arr[SIZE])
{
    for(int i = 0;i < SIZE;i++)
    {
        printf("%d\t",arr[i]);
    }
}