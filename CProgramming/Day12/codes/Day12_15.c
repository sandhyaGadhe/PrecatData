#include<stdio.h> 
int main()
{
    //int *ptr; // wild pointer  
    //int *ptr = NULL; 
    
    int num = 10; 
    float fvar = 12.3f; 
    double dvar = 10.3; 
    char ch = 'A'; 

    void *ptr = NULL ; // generic pointer  

    ptr = &num; 
    printf("%d ",*(int*)ptr); 

    ptr = &ch; 
    printf("%c ",*(char*)ptr); 

    ptr = &fvar; 
    printf("%.2f ",*(float*)ptr); 
    
    ptr = &dvar; 
    printf("%.2lf ",*(double*)ptr); 
    
    return 0;
}

