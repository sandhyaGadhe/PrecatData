#include<stdio.h> 
int main()
{   
    // int , float , char , double 
    // int x;
    int number = 10; 
    enum // Annonymous enum 
    {
         RED,BLUE,GREEN    
    }c1,c2,c3;
     
    // float     a; 
    //datatype variable-name 

    
    //c1,c2,c3 => variable names 
    
    return 0;
}

// int main()
// {   
//     // int , float , char , double 
//     // int x;
//     int number = 10; 
//     enum color  // ( created the datatype)
//     {
//          //RED,BLUE,GREEN
//          //RED,BLUE,GREEN,violet 
//          //RED=1,BLUE,GREEN,violet 
//          //RED=1,BLUE=2,GREEN=3,violet=4 
//          //RED,BLUE=2,GREEN,violet=100 ,BLACK
//          //RED=-1,BLUE,GREEN=2,violet
//          //RED=-1,BLUE,GREEN=-1,violet
//          //RED=1.5,BLUE,GREEN=-1,violet // NOT OK 
//           //RED='A',BLUE,GREEN
//           //RED,BLUE,GREEN,RED // NOT OK 
//           //RED,BLUE,GREEN,Red
//           //RED=number,BLUE,GREEN // NOT OK 
//     };
     
//     // float     a; 
//     //datatype variable-name 

//     enum color c1,c2,c3; 
//     //c1,c2,c3 => variable names 
    
//     return 0;
// }

// int main()
// {   
//     // int , float , char , double 
//     // int x;

//     enum color  // ( created the datatype)
//     {
//          RED,BLUE,GREEN
//     }; 
//     // float     a; 
//     //datatype variable-name 

//     enum color c1,c2,c3; 
//     //c1,c2,c3 => variable names 
//     c1 = RED; 
//     //printf("%d ",c1); // 0 
//     c1 = BLUE; 
//     //printf("%d ",c1); // 1  
//     c1++; // OK 
//     //printf("%d ",c1); // 2  
//     //RED++;  // 0++ => 0 = 0 + 1 
    
//     printf("%d %d",sizeof(enum color) , sizeof(c1)); 
//     //                      4               4 
//     return 0;
// }
// int x; 
// sizeof(int) => 4 bytes 
// sizeof(x) => 4 bytes







 