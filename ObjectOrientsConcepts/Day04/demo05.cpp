#include <iostream>
using namespace std;

class Square
{
private:
    int *sptr;

public:
    Square(int side)
    {
        cout << "inside parameterized ctor" << endl;
        sptr = new int;
        *sptr = side;
    }

    void setSptr(int side)
    {
        *sptr = side;
    }

    void calculateArea()
    {
        cout << "Side of square - " << *sptr << endl;
        cout << "Area of square - " << (*sptr) * (*sptr) << endl;
    }

    ~Square()
    {
        cout << "Inside Dtor" << endl;
        delete sptr;
        sptr = NULL;
    }
};

int main()
{
    Square s1(5);
    s1.calculateArea(); // 25

    Square s2 = s1;     // Default copy Ctor
    s2.calculateArea(); // 25

    cout << "After change in s2 side value - " << endl;
    s2.setSptr(7);

    s1.calculateArea();
    s2.calculateArea();

    return 0;
}