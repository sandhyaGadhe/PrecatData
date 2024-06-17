#include <iostream>
using namespace std;

class Point
{
private:
    int xaxis;
    int yaxis;

public:
    Point()
    {
        xaxis = 1;
        yaxis = 1;
    }

    Point(int xaxis, int yaxis)
    {
        this->xaxis = xaxis;
        this->yaxis = yaxis;
    }

    void displayPoint()
    {
        cout << "Point - (" << xaxis << "," << yaxis << ")" << endl;
    }

    friend Point operator+(Point p1, Point p2);
};

Point operator+(Point p1, Point p2)
{
    Point p3;
    p3.xaxis = p1.xaxis + p2.xaxis;
    p3.yaxis = p1.yaxis + p2.yaxis;
    return p3;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = num1 + num2;
    cout << "Num3 - " << num3 << endl;

    Point p1;
    Point p2(2, 3);
    Point p3 = p1 + p2; // operator+(p1,p2);
    p1.displayPoint();
    p2.displayPoint();
    p3.displayPoint();
    return 0;
}