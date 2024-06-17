#include<stdio.h>
/*
        I/p a ammount 
        if amm is greater than or equal to 5000 
        give 10% discount 

*/ 
int main()
{
    double ammount , discount; 
    //Input 
    printf("Enter the ammount :: ");
    scanf("%lf",&ammount); //5000.00 

    //processing 
    if(ammount>=5000.00)//if(5000.00>=5000.00)=>if(1)
        ammount = ammount * 0.90; 
    printf("Final ammount = %.2lf",ammount);  
     
    
    return 0;
}

// int main()
// {
//     double ammount , discount; 
//     //Input 
//     printf("Enter the ammount :: ");
//     scanf("%lf",&ammount); //5000.00 

//     //processing 
//     if(ammount>=5000.00)//if(5000.00>=5000.00)=>if(1)
//     {
//          discount = ammount * 0.10; 
//          ammount = ammount - discount;    
//     }
//     printf("Final ammount = %.2lf",ammount);  
     
    
//     return 0;
// }
