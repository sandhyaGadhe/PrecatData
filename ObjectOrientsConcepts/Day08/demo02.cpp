#include <iostream>
using namespace std;

class Base
{
public:
    void f1()
    {
        cout << "Base::f1()" << endl;
    }
};

class Derived : public Base
{
public:
    // Function overriding
    void f1()
    {
        cout << "Derived::f2()" << endl;
    }
    void f2()
    {
        cout << "Derived::f2()" << endl;
    }
};

int main()
{
    Base *bptr = new Derived; // upcasting
    bptr->f1();               // Base::f1() Early binding

    // bptr->f2(); // object Slicing
    return 0;
}