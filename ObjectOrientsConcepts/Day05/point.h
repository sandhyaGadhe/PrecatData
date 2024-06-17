#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class Point
{
private:
    int xaxis;
    int yaxis;

public:
    Point();
    Point(int xaxis, int yaxis);
    void displayPoint();
};
#endif