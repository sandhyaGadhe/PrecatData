#include<stdio.h> 

int main( )
{
    int num = 10; 
    //printf("          %d",num); 
    //width specifier 
    //printf("%10d",num); // right justified  
    //                 1 0  
    // - - - - - - - - - - 

    //printf("%-10d",num); // left justified
    // 1 0 
    // - - - - - - - - - -   

    //printf("%010d",num); // right justified  
    // 0 0 0 0 0 0 0 0 1 0 
    // - - - - - - - - - - 
    
    float fvar = 12.33; 
    // float => %f 
    //printf("%.2f",fvar);//12.33  

    //printf("%10.2f",fvar);//12.33  
    //           1 2 . 3 3 
    // - - - - - - - - - -  

    //printf("%-10.2f",fvar);//12.33
    // 1 2 . 3 3   
    // - - - - - - - - - - 

    printf("%.f",fvar);//12.33 => 12 
    return 0; 
}

/*
    1.classwork ( refer recorded session )
    2.Assignment solving ( lab )
    3.MCQ solve 
    4.Sunbeam book 


    (MCQ)
    1.MCQ
    2.POLL 
    3.Topic wise Test 
    4.sunbeam book MCQ   

*/