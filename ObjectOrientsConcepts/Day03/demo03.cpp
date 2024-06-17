#include <iostream>
using namespace std;
int num1 = 10; // global namespace scope

namespace Na
{
    int num1 = 20;
}

int main()
{
    int num1 = 30;
    cout << "value of num1 from global scope - " << ::num1 << endl;
    cout << "value of num1 from Na scope - " << Na::num1 << endl;
    cout << "value of num1 from local scope - " << num1 << endl;
    return 0;
}