#include<stdio.h>
#include<stdlib.h> 
int main()
{   
    //void* calloc(size_t n , size_t size); 
    int i , cnt; 
    int *marks; 
    printf("How many students :: "); 
    scanf("%d",&cnt); //5
    marks = (int*)calloc(cnt , sizeof(int)); //request 
    if(marks == NULL) // check if it is avail 
    {
        printf("Memory not allocated"); 
        exit(1); 
    } 
    printf("Enter the marks of %d students ",cnt); 
    for(i=0 ; i < cnt ; i++ ) // use 
          scanf("%d",&marks[i]);   
    for(i=0 ; i < cnt ; i++ )  
          printf("%d ",marks[i]);// print 
    free(marks); // to avoid memory leakage 
    marks = NULL; // to avoid dangling pointer  
    return 0;
}
/*
        int arr[10]; //static approach 
        static allocation => compile time 

        dynamic approach => runtime 

*/