#include <iostream>
using namespace std;

class A
{
};

// single inheritance
class B : A
{
};

// multilevel inheritance
class C : B
{
};

// hirerachical Inheritance(consider class A,B and D)
class D : A
{
};

class E
{
};

class F
{
};

// multiple inheritance
class G : E, F
{
};

// hybrid inheritance -> mix any of the above 2 inheritances
// and we have hybrid inheritance