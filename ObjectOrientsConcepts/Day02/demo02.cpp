#include <iostream>
using namespace std;
void add(int num1, int num2)
{
    cout << "Addition = " << num1 + num2 << endl;
}

void add(int num1, int num2, int num3)
{
    cout << "Addition = " << num1 + num2 + num3 << endl;
}

int main()
{
    add(10, 20);
    add(10, 20, 30);
    return 0;
}