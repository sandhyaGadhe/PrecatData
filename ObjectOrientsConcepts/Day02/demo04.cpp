#include <iostream>
using namespace std;

// default argument function
void add(int num1, int num2, int num3 = 0, int num4 = 0)
{
    cout << "Addition = " << num1 + num2 + num3 + num4 << endl;
}

int main()
{
    add(10, 20, 30, 40);
    add(10, 20, 30);
    add(10, 20);

    return 0;
}