//I/P a char from the user and write them in file 
#include<stdio.h> 
#include<stdlib.h> 
int main()
{
    char ch; 
    FILE *fp;
    //open the file 
    fp=fopen("file1.txt","r");  
    if(fp == NULL)
    {
        printf("fopen failed"); 
        exit(1); 
    }
    while(1)
    {
        //input a char from a user 
        ch = fgetc(fp);
        //returns next char , otherwise return -1 if file ends   
        if(ch == EOF)// input is completed (end of input)
          break; 
        putchar(ch);      
    }
    //close the file 
    fclose(fp); 
    return 0;
}
/*
        Hello world
        press ctrl + z  finish input 
*/

/*
    File pointer (stream pointer ) is a pointer to a structure of type FILE 
    File pointer points to this structure( identifies our file)  

*/
