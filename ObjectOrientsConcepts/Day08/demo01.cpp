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
    void f2()
    {
        cout << "Derived::f2()" << endl;
    }
};

int main()
{
    // Derived d;
    // d.f1();
    // d.f2();

    Base *bptr = new Derived; // Upcasting
    bptr->f1();
    // bptr->f2(); // NOT OK -> Object Slicing

    Derived *dptr = (Derived *)bptr; // Downcasting
    dptr->f2();
    dptr->f1();
    return 0;
}