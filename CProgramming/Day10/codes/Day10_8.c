#include<stdio.h> 
void sumpro( int a, int b); 
int ps,pp;// global variable 
/*
    variable  declared inside the function => local variable 
    variable  declared outside the function => global variable     
*/
int main()
{
    int a = 10 , b = 4; 
    sumpro(a,b); 
    /*
        global var => can be accessed throughout the program 
        stored inside the data-section 
             //created when program is started 
             //even before main( ) is called 
        //created in data-section      

      //destroyed when program is terminated 
        // after completion of main( )  
    
    */
    return 0;
}
//              10      4 
void sumpro( int a, int b)
{
       ps = a + b; // 14 
       pp = a * b; // 40 
       printf("\n ps = %d pp = %d",ps,pp); // OK    
}

