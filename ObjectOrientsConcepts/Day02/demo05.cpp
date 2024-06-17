#include <iostream>
using namespace std;
#define SIZE 5;

inline int getSize()
{
    return 5;
}

inline void add(int num1, int num2)
{
    cout << "Addition = " << num1 + num2 << endl;
}

int main()
{
    int arr1[5.3];
    int arr2[getSize()];
    add(10, 20);
    // cout << "Addition = " << 10 + 20 << endl;
    return 0;
}