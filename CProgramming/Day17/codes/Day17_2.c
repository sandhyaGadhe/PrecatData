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
    struct student 
    {
         char name[20]; 
         int rollno;    
    };  
    //int => datatype
    //int           x  = 10;
    //datatype   variable-name  
    struct emp e1 = {1,"Ketan",1000.00};
    struct emp e2 = {1,"Amit"}; 
    struct emp e3; 
    struct emp e4;     

    //printf("%d %s %.2lf",e1.empno,e1.name,e1.salary);     
    /*
                 float a; 
                 float *p = &a;    
    
    */
    struct emp *p  = &e1; //scale factor => 32 bytes  
    //printf("%d %s %.2lf",p->empno,p->name,p->salary); 
    
    /*
            int n; 
            n = 10; 
    */
    e3.empno = 3; 
    strcpy(e3.name,"Rahul");
    e3.salary = 2000.00;
    //printf("%d %s %.2lf",e3.empno,e3.name,e3.salary);       
    
    printf("Enter name , empid , salary"); 
    scanf("%d%s%lf",&e4.empno,e4.name,&e4.salary ); 
    printf("%d %s %.2lf",e4.empno,e4.name,e4.salary);       

    return 0;
}
