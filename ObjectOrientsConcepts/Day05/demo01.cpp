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

    friend void addPoint(Point p1, Point p2);
};

void addPoint(Point p1, Point p2)
{
    Point p3;
    p3.xaxis = p1.xaxis + p2.xaxis;
    p3.yaxis = p1.yaxis + p2.yaxis;
    p3.displayPoint();
}

int main()
{
    Point p1;
    p1.displayPoint();

    Point p2(2, 3);
    p2.displayPoint();

    addPoint(p1, p2);

    return 0;
}