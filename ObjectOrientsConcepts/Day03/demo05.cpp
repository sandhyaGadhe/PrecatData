#include <iostream>
using namespace std;
namespace Na
{
    int num1 = 10;
    namespace Nb
    {
        int num1 = 100;
        int num2 = 20;
    }
}

namespace Nc
{
    int num2 = 200;
    int num3 = 30;
}

int main()
{
    // cout << "num1 from na - " << Na::num1 << endl;
    // cout << "num1 from nb - " << Na::Nb::num1 << endl;
    // cout << "num2 from nb - " << Na::Nb::num2 << endl;
    // cout << "num2 from nc - " << Nc::num2 << endl;
    // cout << "num3 from nc - " << Nc::num3 << endl;

    using namespace Na;
    cout << "num1 from na - " << num1 << endl;

    cout << "num1 from nb - " << Nb::num1 << endl;
    using namespace Nb;
    cout << "num2 from nb - " << num2 << endl;

    using namespace Nc;
    cout << "num2 from nc - " << Nc::num2 << endl;
    cout << "num3 from nc - " << num3 << endl;
    return 0;
}