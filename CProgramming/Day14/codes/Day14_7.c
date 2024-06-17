#include<stdio.h> 
int main()
{
    // char str[20] = "Sunbeam"; // stack 
    // char str2[20] = "Sunbeam";
    // if(str == str2) // comparing the addresses 
    //   printf("same"); 
    // else 
    //   printf("not same"); 

    //pointer to a string 
    // char *str1 = "info"; 
    // char *str2 = "info";
    // //memory is allocated from RO(read only ) data section  
    
    // if(str1 == str2)
    //   printf("same"); 
    // else 
    //   printf("not same"); 

    // char name[10] = "ABC"; // stack 
    // printf("%s",name);//ABC  
    // name[0] = 'K'; 
    // printf("%s",name);// KBC 
    
    // char *str3 = "ABC"; // RO data-section 
    // //printf("%s",str3); 
    // str3[0] = 'K'; // *(str3 + 0)
    // printf("%s",str3); // runtime error 
    // //trying to modify the string from RO data section => runtime error 

    char str5[20] = "Sunbeam";

    printf(str5); //Sunbeam 
    printf("\n");    
    printf(str5+1); //unbeam 
    printf("\n");    
    printf(str5+2); //nbeam 
    
    return 0;
}
