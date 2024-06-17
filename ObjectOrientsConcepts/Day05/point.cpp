#include "point.h"

Point::Point()
{
    xaxis = 1;
    yaxis = 1;
}

Point::Point(int xaxis, int yaxis)
{
    this->xaxis = xaxis;
    this->yaxis = yaxis;
}

void Point::displayPoint()
{
    cout << "Point - (" << xaxis << "," << yaxis << ")" << endl;
}
