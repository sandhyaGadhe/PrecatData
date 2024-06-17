#include <iostream>
using namespace std;

int main()
{
    int num1 = 10;
    cout << "Address of num1 - " << &num1 << endl;
    cout << "value inside num1 - " << num1 << endl;

    int &myrefnum = num1;
    cout << "Address of myrefnum - " << &myrefnum << endl;
    cout << "value inside myrefnum - " << myrefnum << endl;

    int &refn = num1;

    int num2 = 20;
    //&myrefnum2 = num2; // not allowed
    myrefnum = num2;
    cout << "value inside num1 - " << num1 << endl;
    return 0;
}