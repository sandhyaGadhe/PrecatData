#include<stdio.h> 
struct node  // self referential structure  
{
    int data; 
    struct node *next;  //self referential pointer 
}; 
int main()
{
    struct node s1; 
    struct node s2; 
    return 0;
}
