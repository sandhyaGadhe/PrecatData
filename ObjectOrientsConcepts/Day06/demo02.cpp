#include <iostream>
using namespace std;

void division(int numerator, int denominator)
{
    if (denominator == 0)
    {
        throw 2; // throw int
    }
    cout << "Division - " << numerator / denominator << endl;
}

void multiplication(int num1, int num2)
{
    if (num1 == 0 || num2 == 0)
    {
        throw 3.5; // throw double
    }
    cout << "Multiplication - " << num1 * num2 << endl;
}

int main()
{
    try
    {
        division(10, 2);
        multiplication(10, 0);
    }
    catch (...) // Generic Catch Block
    {
        cout << "Something went wrong ..." << endl;
    }

    cout << "Thank you for using our app... :)" << endl;
    return 0;
}