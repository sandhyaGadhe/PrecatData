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

    Point operator+(Point p2) // p1-> this
    {
        Point p3;
        p3.xaxis = this->xaxis + p2.xaxis;
        p3.yaxis = this->yaxis + p2.yaxis;
        return p3;
    }
};

int main()
{
    Point p1;
    Point p2(2, 3);
    Point p3 = p1 + p2; // p1.operator+(p2);
    p1.displayPoint();
    p2.displayPoint();
    p3.displayPoint();
    return 0;
}