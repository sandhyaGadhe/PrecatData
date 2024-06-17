#include<stdio.h> 
void sumpro( int a, int b); 
int main()
{
    auto int d; //auto indicates local variable
   //(in function variable) => auto => optional
    int c; // if not init => Garbage 
    int a = 10 , b = 4; // local variables 
    /*
            a,b,c,d will be created when main is called 
            on main's FAR ( stack )
    
    */
    
    //printf("c = %d",c);
    {
            int c = 10; 
            printf("%d\n",c); //10 
            {
                int c = 100; 
                printf("%d\n",c); //100 
                {
                    int c = 200;
                    printf("%d\n",c);//200   
                }
                printf("%d\n",c); //100 
            }
        printf("%d\n",c); //10     
    }
    sumpro(a,b); 
    printf("\n inside main a = %d b= %d",a,b); 
    return 0;
}
//              10      4 
void sumpro( int a, int b)
{
      int ps,pp; 
   /*
        a,b,ps,pp will be created when sumpro is called 
        on sumpro's FAR ( stack )

   */
       ps = a + b; // 14 
       pp = a * b; // 40 
       printf("\n ps = %d pp = %d",ps,pp);    
       a++; 
       b++;
       /*
               modifying a,b in sumpro FAR will not affect 
               main's "a" "b" variable  

       */ 
         
}