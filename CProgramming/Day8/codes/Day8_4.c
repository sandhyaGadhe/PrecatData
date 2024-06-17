#include<stdio.h> 
int main()
{
    // alias => nickname 
    // datatype => nickname

    int x;
    typedef int INT; 
    INT x;   
    int y;   
    size_t z;
    enum color 
    {
        RED,BLUE,GREEN 
    }; 
    typedef enum color e_c;
    e_c c1,c2,c3;    
    return 0;
}
