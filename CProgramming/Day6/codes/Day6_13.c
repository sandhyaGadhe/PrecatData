#include<stdio.h> 
int main()
{
    //conditional operator ( ternary operator )
    int num1 = 1; 
    int num2 = 5; 
    int ans; 
    /*
    if(num1 > num2)
        //exp1
    else 
       //exp2
    */ 
    //ans = num1 > num2 ? num1 : num2; 
    //      condtn    ? exp1 : exp2; 
    //       1>5 
    //printf("ans = %d",ans);  
    
    num1 > num2 ? printf("num1 is greatest") : printf("num2 is greatest");

    return 0;
}
/*
            greatest of 3 numbers 
            num1,num2,num3

ans =  num1 > num2 ? (num1 > num3 ? num1 : num3 ) : ( num2 > num3 ? num2 : num3);    
          codtn    ?           exp1               :          exp2       


    // greatest of a,b,c 
a>b && a>c ? printf("max = %d",a) :( b > c ? printf("max = %d ",b) : printf("max = %d",c));  )        


int max; 
max = a>b && a>c ? a : ( b > c ? b : c ); 
printf("max = %d",max);  

*/

