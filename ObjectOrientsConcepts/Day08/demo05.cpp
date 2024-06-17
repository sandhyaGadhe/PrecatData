#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void acceptData() = 0;
    virtual void calculateArea() = 0;
};

class Circle : public Shape
{
    int radius;

public:
    void acceptData()
    {
        cout << "Enter the radius - ";
        cin >> radius;
    }
    void calculateArea()
    {
        cout << "Area of circle - " << 3.14 * radius * radius << endl;
    }
};

class Square : public Shape
{
    int side;

public:
    void acceptData()
    {
        cout << "Enter the side - ";
        cin >> side;
    }
    void calculateArea()
    {
        cout << "Area of Square - " << side * side << endl;
    }
};

class Rectnagle : public Shape
{
    int length;
    int breadth;

public:
    void acceptData()
    {
        cout << "Enter the length and breadth - ";
        cin >> length >> breadth;
    }
    void calculateArea()
    {
        cout << "Area of reactangle - " << length * breadth << endl;
    }
};

int main()
{
    Shape *sptr = NULL;
    int choice;
    do
    {
        cout << "0.Exit" << endl;
        cout << "1.Rectangle" << endl;
        cout << "2.Circle" << endl;
        cout << "3.Square" << endl;
        cout << "Enter the choice - ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Thankyou for using our app..:)" << endl;
            break;
        case 1:
            sptr = new Rectnagle; // upcasting
            break;
        case 2:
            sptr = new Circle; // upcasting
            break;
        case 3:
            sptr = new Square; // upcasting
            break;
        default:
            cout << "Wrong choice..:(" << endl;
            break;
        }
        if (sptr != NULL)
        {
            sptr->acceptData();
            sptr->calculateArea();
            delete sptr;
            sptr = NULL;
        }

    } while (choice != 0);

    return 0;
}