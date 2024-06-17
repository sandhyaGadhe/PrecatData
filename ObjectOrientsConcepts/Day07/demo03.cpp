#include <iostream>
using namespace std;

class Base
{
private:
    int num1;

protected:
    int num2;

public:
    int num3;

    void displayBase()
    {
        cout << num1 << num2 << num3 << endl;
    }

    friend void myfun();
};

void myfun()
{
    Base b;
    cout << b.num1 << b.num2 << b.num3 << endl;
}

class Derived : public Base
{
    void displayDerived()
    {
        cout << num1 << num2 << num3 << endl;
    }
};

class IndirectDerived : Derived
{
    void displayIndirectDerived()
    {
        cout << num1 << num2 << num3 << endl;
    }
};

int main()
{
    Base b;
    cout << b.num1 << b.num2 << b.num3 << endl;

    Derived d;
    cout << d.num1 << d.num2 << d.num3 << endl;
    return 0;
}