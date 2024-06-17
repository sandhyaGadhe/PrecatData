#include <iostream>
using namespace std;

class Engine // Dependency
{
private:
    int cc;
};

class AudioSystem
{
private:
    int watts;
};

// car has-a Engine
// car has-a AudioSystem
class Car // Depenedent
{
private:
    string model;
    double price;
    Engine e;                // Association -> Composition
    AudioSystem *ptr = NULL; // Association -> Aggegration
};

// Bike has-a engine
class Bike
{
    string compnay;
    double price;
    Engine e; // Association -> Composition
};

class Aeroplane
{
};

int main()
{
    Car c;
    return 0;
}