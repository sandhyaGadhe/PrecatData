#include<stdio.h> 
/*
        student info 
        std 1 to 4 => Grade ( 'A ' , 'B' , 'C' )
        std 5 to 10 => marks ( 40, 50 , 60)
*/
struct student 
{
    int roll; //4 bytes  
    char name[20]; // 20 bytes 
    int std; // 4 bytes 
    union
    {
        char grade; 
        int marks; 
    }result; // 4 bytes 
};  
int main()
{
    struct student s1; 
    printf("Enter roll name and std"); 
    scanf("%d%s%d%*c",&s1.roll,s1.name,&s1.std);
    if(s1.std<=4)
    {
        printf("Enter the grade"); 
        s1.result.grade = getchar( ); 
    } 
    else 
    {
         printf("Enter the marks"); 
         scanf("%d",&s1.result.marks); 
    }
    printf("roll = %d name = %s std = %d",s1.roll,s1.name,s1.std); 
    if(s1.std<=4)
    {
          printf(" Grade = %c",s1.result.grade);   
    }
    else 
    {
          printf(" Marks = %d",s1.result.marks); 
    }
    return 0;
}
