#include<stdio.h> 
int main()
{
    //short hand operator 
    int a = 1; 
    int b = 2; 
    int c = 3; 
    //a+=b+=c+=1; 

    /*
            c = c + 1; // 3 + 1 => 4 
            b = b + c; // 2 + 4 => 6 
            a = a + b; // 1 + 6 => 7  
    
    */ 

    a = b = c = -3; 
    printf("%d %d %d",a,b,c); // -3 -3 -3 


    return 0;
}

// int main()
// {
//     //short hand assignment 
//     int num1 = 4; 
//     //num1 = num1 + 3; 
//     //num1+=3; // num1 = num1 + 3 
//     //num1-=3; // num1 = num1 -3   
//     //num1*=4; // num1 = num1 * 4  
//     //num1/=2; // num1 = num1 / 2  
//       num1%=2; // num1 = num1 % 2 
//     printf("%d ",num1); // 0 
//     return 0;
// }
/*
        num1+=1 ====> num1 = num1 + 1 ( short hand assignment opr )

        num1 = +1; (unary + )
        num1 = -1; (unary -)

*/



// int main()
// {
    
//     //int num1;
//      // ( = ) assignment operator  
//     //num1 = 1; // assignment 
//     //10 = 2; // lvalue error
//     //5 = 2 + 3;  // lvalue error
//     //2 + 3 = 5; // lvalue error
//     //num1 = 2 + 3; 
//     //printf("%d ",num1);//5  
    
//     int a = 1; 
//     //a + 1; 
//     //a = a + 1;  
//     //printf("%d ",a); 
//     int x = 1; 
//     int y = 2; 
//     printf("%d ",x); //1 
//     printf("%d ",x = y); //2 
//     printf("%d ",x); // 2  
//     return 0;
// }
