#include <stdio.h>
// function declaration 

double addition(double num1, double num2);
void multiplication(double a, double b);
int division(int num, int den);
void subtract(void);

//function can return only one value to the calling function 

int main(void) // user-defined function
{
    double num1 = 10.00, num2 = 2.00, ans;
    ans = addition(num1, num2);
    printf("ans = %.2lf\n", ans);
    multiplication(4.0, 4.0); // function call
    int num, den, res;
    printf("\nEnter the num and den :: ");
    scanf("%d%d", &num, &den); // 4  2
    res = division(num, den);  // function call
    printf("\n res = %d", res);
    subtract();

    
    return 0;
}
// calling function => main

// function defination

void subtract(void)
{
    int p, q, r; // local variable
    printf("\nEnter the 2 numbers :: ");
    scanf("%d%d", &p, &q);
    r = p - q;
    printf("\n subtract = %d", r);
}

int division(int num, int den)
{
    return num / den;
    //  int r;
    //  r = num / den;
    //  return r;
}

void multiplication(double a, double b)
{
    double res;
    res = a * b;
    printf("\n multiply = %.2lf", res);
}
double addition(double num1, double num2)
{
    // num1 , num2 , z are the local variables
    double z;
    z = num1 + num2;
    return z;
}



