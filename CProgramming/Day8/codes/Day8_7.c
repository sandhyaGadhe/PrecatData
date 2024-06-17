#include<stdio.h> 
int main()
{
    //goto (jump statement)

    int rank; 

    START: 
    printf("Enter the rank :: "); 
    scanf("%d",&rank); 

    if(rank>=1 && rank<=5)
          goto END; 
    else 
          goto START; 
    
    END: 
    printf("Excellent rank all the best!!!!"); 
    return 0;
}

