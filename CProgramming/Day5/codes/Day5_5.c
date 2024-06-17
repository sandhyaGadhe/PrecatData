#include<stdio.h> 
int main()
{
    // int num1 = 2; 
    // int num2 = 2;
    // int num3 = 2; 
    // float avg; 
    // avg = (num1 + num2 + num3) / 3; 
    // /*
    //       (int + int + int) / (int)  
    //           (int)  / (int)
    //           (int) 
    //      RHS => (int) => 2 
    //      LHS => float 
    //      2.00 <==2     
    // */
    // printf("%.2f",avg);   


    // int num1 = 2; 
    // int num2 = 2;
    // int num3 = 1; 
    // float avg; 
    // avg = (num1 + num2 + num3) / 3; 
    // /*
    //       (int + int + int) / (int)  
    //           (int)  / (int)
    //           (int) 
    //      RHS => (int) => 1.66 =>1  
    //      LHS => float 
    //      .00 <==1     
    // */
    // printf("%.2f",avg);   


    // int num1 = 2; 
    // int num2 = 2;
    // int num3 = 1; 
    // float avg; 
    // avg = (num1 + num2 + num3) / 3.0; 
    // /*
    //       (int + int + int) / (double)  
    //           (int)  / (double)
    //           (double) 
    //      RHS => (double) => 1.66 
    //      LHS => float 
    //      float <=double  
    //      1.66f<=1.66   
    // */
    // printf("%.2f",avg);   

    // int num1 = 2; 
    // int num2 = 2;
    // int num3 = 1; 
    // float avg; 
    // avg = (num1 + num2 + num3) / 3.0f; 
    // /*
    //       (int + int + int) / (float)  
    //           (int)  / (float)
    //           (float) 
    //      RHS => (float) => 1.66 
    //      LHS => float 
    //      float <=float  
    //      1.66f<=1.66   
    // */
    // printf("%.2f",avg);   

    int num1 = 2; 
    int num2 = 2;
    int num3 = 1; 
    float avg; 
    avg = ((float)num1 + num2 + num3) / 3; 
    /*
          (float + int + int) / (int)  
              (float)  / (int)
              (float) 
         RHS => (float) => 1.66 
         LHS => float 
         float <=float  
         1.66f<=1.66   
    */
    printf("%.2f",avg);   
    return 0;
}
