#include<stdio.h> 
int main()
{
    {
        int c = 10; 
        printf("%d ",c); // 10 
        {
            c+=1; 
            printf("%d\n",c); // 11 
        }
        printf("%d\n",c);// 11 
    }
    return 0;
}

// int main()
// {
//     //int c = 10; 
//     {
//         {
//             {
//                 {
//                     int c = 100;
//                     //printf("%d",c); //100 
//                 }
//             }
//         }
//     }
//     //printf("%d",c); //100 
//     return 0;
// }
