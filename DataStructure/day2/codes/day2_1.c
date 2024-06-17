#include<stdio.h>
#define SIZE 9
int comparisons;
int binary_search(int arr[SIZE],int key);
int main()
{
    int arr[SIZE] = {11,22,33,44,55,66,77,88,99};
    int key;
    printf("Enter the key to search :");
    scanf("%d",&key); // 77
    int index = binary_search(arr,key);
    if(index != -1)
        printf("Key is found at index %d\n",index);
    else
        printf("Key not Found !\n");
        printf("Comparisons = %d\n",comparisons);

}

int binary_search(int arr[SIZE],int key)
{
    int left = 0,right = SIZE-1,mid;
while(left <= right) // 0 <= 8 --> 5 <= 8
{
    comparisons++;
    mid = (left+right) / 2; // mid = 4 --> 6
    if(key == arr[mid]) // 77 == 55 --> 77 == 77
        return mid; // return index -> return 6
    else if (key < arr[mid]) // consider left subarray
    {
        // left subarray is from left index(0) to mid -1
        right = mid - 1;
    }
    else // consider right sub array
    {
        // right subarray is from mid+1 to right index(SIZE-1)
        left = mid + 1;
    }
}
return -1; // key not found
}