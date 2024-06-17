#include<stdio.h> 
void sumpro( int a, int b); 
int main()
{
    int a = 10 , b = 4; 
    sumpro(a,b); 
    //printf("\n inside main a = %d b= %d",ps,pp);// NOT OK 
    // ps and pp belong to sumpro function 
    // ps and pp are visible inside sumpro only  
    return 0;
}
//              10      4 
void sumpro( int a, int b)
{
       int ps,pp; 
       ps = a + b; // 14 
       pp = a * b; // 40 
       printf("\n ps = %d pp = %d",ps,pp);    
}