#include<stdio.h> 
int main()
{
    //type qualifier => const , volatile 
    const int n = 20; 
    printf("%d",n); //20 => OK 
    //n = 30; // NOT OK  
    //n++; // NOT OK 
    return 0;
}
