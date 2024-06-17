#include <iostream>
using namespace std;

// abstract class
class Base
{
public:
    // pure virtual function
    virtual void f1() = 0;
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