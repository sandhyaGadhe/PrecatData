#include<stdio.h> 
#include<string.h> 

struct emp // Blueprint (declaration ) creating a type 
{
    int empno; //4 bytes 
    char name[20]; // 20 bytes 
    double salary; // 8 bytes 
};
int main()
{
    //int arr[3] = {1,2,3}; 
    // array of structures  
    struct emp arr[3]={
             {1,"Ketan",1000.00}, //[0]
             {2,"Amit",2000.00},  //[1] 
             {3,"Rahul",3000.00}  //[2]
    }; 
    int i; 
    for(i = 0 ; i < 3 ; i++)
        printf("%d %s %.2lf\n",arr[i].empno,arr[i].name,arr[i].salary); 
    return 0;
}
