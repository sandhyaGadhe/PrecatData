#include<stdio.h> 
int main()
{
    int choice = 99;
    int number = 10; 

    switch(choice)
    {
        
        //case 1:
        //case 1 && 2: // case 1:    
        //case 1: case 99: case 'A': 
        case 1: 
        case 99: 
        case 'A': 
        printf("one ");
        break; 

        case 0 || 0: // case 0:  
        printf("Two ");
        break; 

        case 3:
        printf("Three ");
        break;

        
        default: 
        printf("invalid");   
        break;       

    } 

    return 0;
}

// int main()
// {
//     int choice = 65;
//     int number = 10; 

//     //switch(1.5) // NOT OK 
//     //switch(1) // OK 
//     //switch(2+1) // OK 
//     //switch('A') // OK 
//     //switch((int)1.5) // OK 
//     switch(choice + 1)
//     {
        
//         case 1: 
//         printf("one ");
//         break; 

//         case 2: 
//         printf("Two ");
//         break; 

//         case 3:
//         printf("Three ");
//         break;

        
//         default: 
//         printf("invalid");   
//         break;       

//     } 
//     return 0;
// }

// int main()
// {
//     int choice = 65;
//     int number = 10; 

//     switch(choice) // switch(0)
//     {
        
//         //case 1:
//         //case 1.5: // NOT OK  
//         //case 1.5f: // NOT OK 
//         //case 'A':  // case 65:  
//         //case 1*1: // case 1:  
//         //case number: // NOT OK 
//         case 65: 
//         printf("A ");
//         break; 

//         case 2: 
//         printf("Two ");
//         break; 

//         case 3:
//         printf("Three ");
//         break;

        
//         default: 
//         printf("invalid");   
//         break;       

//     } 
//     return 0;
// }

// int main()
// {
//     int choice = 0;

//     switch(choice) // switch(0)
//     {
        
//         case 3:
//         printf("three ");
//         break; 

//         case 0: 
//         printf("zero ");
//         break; 

//         case -1:
//         printf("negative 1 ");
//         break;

//         //case 3:  // NOT OK  
//         //printf("Again three"); 
//         //break; 

//         default: 
//         printf("invalid");   
//         break;       

//     } 
//     return 0;
// }

// int main()
// {
//     int choice = 4;

//     switch(choice) // switch(4)
//     {
        
//         case 1:
//         printf("one ");
//         break; 

//         case 2: 
//         printf("two ");
//         break; 

//         case 3:
//         printf("three ");
//         break;

//         //case 3:  // NOT OK  
//         //printf("Again three"); 
//         //break; 

//         default: 
//         printf("invalid");   
//         break;       

//     } 
//     return 0;
// }

// int main()
// {
//     int choice = 4;

//     switch(choice) // switch(4)
//     {
        
//         case 1:
//         printf("one ");
//         break; 

//         case 2: 
//         printf("two ");
//         break; 

//         case 3:
//         printf("three ");
//         break;

//         default: 
//         printf("invalid");   
//         break;       

//     } 
//     return 0;
// }

// int main()
// {
//     int choice = 1;

//     switch(choice) // switch(3)
//     {
//         case 1:
//         printf("one ");
//         break; 

//         case 2: 
//         printf("two ");
//         break; 

//         case 3:
//         printf("three ");
//         break;        
//     } 
//     return 0;
// }
