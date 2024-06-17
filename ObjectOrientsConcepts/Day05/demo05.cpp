#include <iostream>
using namespace std;

// template <typename P, typename Q>
template <class P, class Q>
class Point
{
private:
    P xaxis;
    Q yaxis;

public:
    Point(P xaxis, Q yaxis)
    {
        this->xaxis = xaxis;
        this->yaxis = yaxis;
    }

    void displayPoint()
    {
        cout << "Point - (" << xaxis << "," << yaxis << ")" << endl;
    }
};

int main()
{
    Point<int, int> p1(1, 2);
    p1.displayPoint();

    Point<double, double> p2(1.5, 2.3);
    p2.displayPoint();

    Point<char, int> p3('A', 15);
    p3.displayPoint();

    Point<char, double> p4('A', 25.36);
    p4.displayPoint();
}
