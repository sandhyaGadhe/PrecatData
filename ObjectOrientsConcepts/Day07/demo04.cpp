#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "Hello" << endl;
    }
};

class B : virtual public A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
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