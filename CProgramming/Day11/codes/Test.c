#include <stdio.h>
int no1 = 17, no2 = 71;
void swapping(void)
{
    int temp = no2;
    no2 = no1;
    no1 = temp;
    printf("%d %d\t", no1, no2); // 71 17 
}
void swap(int n1, int n2)
{
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    printf("%d %d\t", n1, n2); // 17 71 
}
int main(void)
{
    //int no1 = 17, no2 = 71;
    //swap(no2, no1);//71 17  
    swapping();
    printf("\n %d %d",no1,no2); // 71 17 
    return 0;
}
