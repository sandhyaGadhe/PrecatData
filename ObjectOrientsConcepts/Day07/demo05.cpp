#include <iostream>
using namespace std;
class A
{
public:
    int num1;

    void displayA()
    {
        cout << num1 << endl;
    }
};

class B : virtual public A
{
public:
    int num2;
    void displayB()
    {
        cout << num1 << num2 << endl;
    }
};

class C : virtual public A
{
public:
    int num3;
    void displayC()
    {
        cout << num1 << num3 << endl;
    }
};

class D : public B, public C
{
    int num4;
    void displayD()
    {
        cout << num1 << num2 << num3 << num4 << endl;
    }
};

int main()
{
    // A obj;
    // B obj;
    // C obj;
    D obj;
    obj.display();
    return 0;
}