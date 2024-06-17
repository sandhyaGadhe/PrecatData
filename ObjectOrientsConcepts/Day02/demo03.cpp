#include <iostream>
using namespace std;
void square(int num)
{
    cout << "Square - " << num * num << endl;
}

void square(double num)
{
    cout << "Square - " << num * num << endl;
}

void div(int num1, double num2)
{
    cout << "Division - " << num1 / num2 << endl;
}
void div(double num1, int num2)
{
    cout << "Division - " << num1 / num2 << endl;
}
int main()
{
    square(7);
    square(7.5);
    div(8.4, 2);
    div(10, 2.5);
    return 0;
}