#include<stdio.h> 
int main()
{
    const int num = 10;
    const int num2 =20; 
    int const *ptr = &num; 
    //const int *ptr = &num; 
    //const int const *ptr = &num; 
//ptr is a non-constant pointer pointing to constant integer variable       
    printf("num = %d\n",num); //10
    printf("*ptr = %d\n",*ptr); //10 

    //num = 30; // NOT OK
    //*ptr = 40; // NOT OK  

    ptr = &num2; // OK 
    return 0;
}
