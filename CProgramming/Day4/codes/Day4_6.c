#include<stdio.h> 
int main()
{
    //escape sequence 
    // \" \"
    //printf("\"Hello world\""); 

    //\' 
    //printf("\'Hello world\'");

    // \n => newline 
    //printf("Hello \n world ");  
    
    //\b  => backspace 
    //printf("OM49 batch,\b."); 
    //      OM49 batch.
    
    //printf("Hello wo\brld"); 
    //      Hello wrld
    
    //\r => carraige return 
    //printf("KM49 batch\rO");
    //      OM49 batch
    
    //printf("12345678\n"); 
    //\t => tab( 8 spaces )
    //printf("\tHello world");  

    // \ => escape character 
    //printf("\\n is used for new line"); 
    
    
    // \n , \r , \t , \b ( character )
    //printf("%d ",'\n'); // \n => (10)
    //printf("%d ",'\r'); // \n => (13) 
    
    //printf("%d",'\r' - '\n');// 13 - 10 => 3  
    
    printf("%d ",'0');// 48 
    printf("%d ",'9');// 57 

    /*
            A - Z 
            a - z 
            0 - 9
            escape sequence 

    
    */
    return 0;
}
