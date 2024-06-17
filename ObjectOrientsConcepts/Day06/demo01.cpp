#include <iostream>
using namespace std;

void division(int numerator, int denominator)
{
    if (denominator == 0)
    {
        throw 1; // throw int
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
        multiplication(0, 20);
    }
    catch (int num)
    {
        cout << "Denominator cannot be 0" << endl;
    }
    catch (double num)
    {
        cout << "num1 or num2 cannot be 0" << endl;
    }

    cout << "Thank you for using our app... :)" << endl;
    return 0;
}