#include <iostream>
using namespace std;
namespace Na
{
    int num1 = 10;
    int num2 = 20;
}

namespace Nb
{
    int num2 = 200;
    int num3 = 300;
}

int main()
{
    // cout << "num1 from na - " << Na::num1 << endl;
    // cout << "num2 from na - " << Na::num2 << endl;
    // cout << "num2 from nb - " << Nb::num2 << endl;
    // cout << "num3 from nb - " << Nb::num3 << endl;

    using namespace Na;
    cout << "num1 from na - " << num1 << endl;
    cout << "num2 from na - " << num2 << endl;
    using namespace Nb;
    cout << "num2 from nb - " << Nb::num2 << endl;
    cout << "num3 from nb - " << num3 << endl;
    return 0;
}