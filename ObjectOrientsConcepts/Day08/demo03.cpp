#include <iostream>
using namespace std;

class Base
{
public:
    virtual void f1()
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
    bptr->f1();               // Dervied::f1() Late binding

    return 0;
}