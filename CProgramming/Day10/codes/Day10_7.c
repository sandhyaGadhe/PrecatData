#include<stdio.h> 
void sumpro( int a, int b); 
int ps,pp;// global variable 
/*
        ps and pp will be allocated in data-section 
        scope => program 
        life => program 
        by default => 0 
*/
int main()
{
    int a = 10 , b = 4; 
    sumpro(a,b); 
    return 0;
}
//              10      4 
void sumpro( int a, int b)
{
       ps = a + b; // 14 
       pp = a * b; // 40 
       printf("\n ps = %d pp = %d",ps,pp); // OK    
}