#include<stdio.h>
#define SIZE 9

int linear_search(int arr[SIZE],int key);
int comparisons;
int main()
{
    int arr[SIZE] = {33,55,88,77,44,11,66,22,99};
    //step 1 : accept the key from the user
    int key;
    printf("Enter the key to search :");
    scanf("%d",&key); // 77
    int index = linear_search(arr,key);

    if(index != -1)
        printf("Key is found at index %d\n",index);
    else
        printf("Key not found !\n");
    
    printf("No. of Comparisons = %d\n",comparisons);
    return 0;
}

int linear_search(int arr[SIZE],int key)
{
    // step 2 : start the traversal from index 0
    for(int i =0;i < SIZE;i++)
    {
        //step 3: compare key with each element 
        comparisons++;
        if(key == arr[i]) // if key is matching
            return i; // return the index
    }

    return -1; // return false for key not found


}