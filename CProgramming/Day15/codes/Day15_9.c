#include<stdio.h> 
int main()
{
    char names[5][10]; 
    /*
        names 
                   [0]  [1]  [2]  [3] ..... ... [9] 
           [0]      A    B    C   \0 

           [1]      P    Q    R    S   \0 

           [2] 
    
    */
    int i; 
    for(i = 0 ; i < 5 ; i++)
    {
         printf("Enter the names[%d] :: ",i);
         scanf("%s",&names[i]); 
    }
    for(i = 0 ; i < 5 ; i++)
    {
         printf("%s\n",names[i]); 
    }
    return 0;
}
