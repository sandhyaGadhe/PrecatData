#include<stdio.h> 
#define VER 3 
int main() 
{
#ifndef VER
#error "VER not defined"
#endif
#if VER == 1
printf("This is Version 1.\n");
#elif VER == 2
printf("This is Version 2.\n"); 
#else
printf("This is 3+ Version.\n");
#endif

return 0;
}
/*
    int version = 3; 

    if(version == 1)
    {
        300 lines of code 
    } 
    else if (version == 2)
    {
        200 lines of code 
    }
    else if (version == 3) 
    {
        100 lines of code 
    }
    else 
    {
        300 lines of code 
    }



*/