#include <iostream>
using namespace std;

// void square(int num)
// {
//     cout << "Square of num - " << num * num << endl;
// }

// void square(double num)
// {
//     cout << "Square of num - " << num * num << endl;
// }

template <typename T>
void square(T num)
{
    cout << "Square of num - " << num * num << endl;
}

template <typename X, typename Y>
void multiply(X num1, Y num2)
{
    cout << "Multiplication - " << num1 * num2 << endl;
}

int main()
{
    square<int>(3);
    square<double>(3.5);

    multiply<int, int>(10, 20);
    multiply<double, double>(10.12, 20.34);
    multiply<int, double>(10, 20.34);
    multiply<double, int>(10.56, 20);
    return 0;
}