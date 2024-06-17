#include<stdio.h> 
/*
        0 => zero 
        1 => one 
        2 => two 
        3 => three  
*/
int main()
{   
    int num; 
    int i; 
    char *numbers[] ={"zero","one","two","three","four"}; 
    //printf("%d",sizeof(numbers)); // 5 * 4 => 20 
    printf("Enter the number"); 
    scanf("%d",&num); //1 
    printf("%s",numbers[num]); //numbers[1]
    return 0;
}


/*
    "one" "two" "three" "four"

    char *str1 = "one"; 
    char *str2 = "two";
    char *str3 = "three";
    char *str4 = "four"; 

    char *str[] = {"one","two","three","four"};   

*/
