#include<stdio.h> 
#include<string.h> 

struct emp // Blueprint (declaration ) creating a type 
{
    int empno; //4 bytes 
    char name[20]; // 20 bytes 
    double salary; // 8 bytes 
};
void print_emp(struct emp a[ ]);
void accept_emp(struct emp a[ ]);  
int main()
{
    //int arr[3] = {1,2,3}; 
    // array of structures  
    struct emp arr[3]; 
    accept_emp(arr); // base address  
    print_emp(arr); // base address 
        
   
    return 0;
}
void print_emp(struct emp a[ ])
{
    int i; 
    for(i = 0 ; i < 3 ; i++)
        printf("%d %s %.2lf\n",a[i].empno,a[i].name,a[i].salary);   
}
void accept_emp(struct emp a[ ])
{
      int i; 
      for(i = 0 ; i < 3 ; i++)
      {
            printf("Enter empid name and salary"); 
            scanf("%d%s%lf",&a[i].empno,a[i].name,&a[i].salary); 
      }  
}
