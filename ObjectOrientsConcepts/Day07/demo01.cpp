#include <iostream>
using namespace std;

class Base // Parent Class
{
    int num1;
};

// inheritance
class Derived : Base // Child class
{
    int num2;
};

int main()
{
    cout << "size of base class - " << sizeof(Base) << endl;
    cout << "size of derived class - " << sizeof(Derived) << endl;
    return 0;
}