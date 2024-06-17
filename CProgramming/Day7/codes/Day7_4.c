#include<stdio.h> 
int main()
{   
    //int i = 1; 
    // while(i<=5) // infinite loop
    // //while(1<=5) => while(1)
    // //while(1<=5) => while(1)
    // //while(1<=5) => while(1)
    // //while(1<=5) => while(1)
    // //while(1<=5) => while(1)
    // {
    //     printf("Hello world \n"); // body of the loop 
    // }

    // int i = 1; 
    // while(i<=5) 
    // //while(1<=5) => while(1)
    // //while(2<=5) => while(1)
    // //while(3<=5) => while(1)
    // //while(4<=5) => while(1)
    // //while(5<=5) => while(1)
    // //while(6<=5) => while(0)
    // {
    //     printf("Hello world \n"); // body of the loop 
    //     i++;     
    //     //++i;
    //     //i = i + 1
    //     //i+=1;       
    // }
    // printf("\n outside the loop %d",i); //6 
    

    // int i = 1; 
    // while(i<=5) 
    // {
    //     printf("%d ",i); // 1 2 3 4 5    
    //     i++;     
    // }
    // printf("\n outside the loop %d",i); //6 
    

    // int i = 1; 
    // while(i<=5) 
    // {
    //     printf("%d ",i++); // 1 2 3 4 5     
    // }
    // printf("\n outside the loop %d",i); //6 

    // int i = 1; 
    // while(i<=5) 
    // {
    //     printf("%d ",++i); // 2 3 4 5 6     
    // }
    // printf("\n outside the loop %d",i); //6 

    // int i = 1; 
    // while(i<=5); // infinite loop 

    // {
    //     printf("%d ",i); 
    // }

    // while(1) // infinite loop 
    // //while(0)// false 
    // {
    //     printf("Hello world"); 
    // }

    // char ch = 0;  // signed => 127 to -128 
    // while(ch++)
    // {
    //     printf("%d %c",ch,ch); 
    // }
    // printf("\n outside the loop %d",ch); // 1 


    // char ch = 0;  // signed => 127 to -128 
    // while(++ch)
    // {
    //     printf("%d %c\n",ch,ch); 
    // }

    // int i = 1 , j = 1; 
    // while(i<=5,j<=10)
    // {
    //     printf("i=%d j=%d\n",i,j); 
    //     i++,j++; 
    // }

    int i = 1 , j = 1; 
    while(i<=10,j<=5)
    {
        printf("i=%d j=%d\n",i,j); 
        i++,j++; 
    }
    
    
    return 0;
}

/*
        char ch=1; 

        while(ch<256)
        {
            // Body 
        }

*/