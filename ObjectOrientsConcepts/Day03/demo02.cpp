#include <iostream>
using namespace std;

// namespace called as Na
namespace Na
{
    int num1 = 10;

    void myfun()
    {
        // std::cout << "Inside myfun()" << std::endl;
        cout << "Inside myfun()" << endl;
    }

    class Time
    {
        int hr;
        int min;
    };

    struct Point
    {
        int xaxis;
        int yaxis;
    };

}

int main()
{
    // cout << Na::num1 << endl;
    // Na::myfun();
    // Na::Time t1;

    using namespace Na;
    cout << num1 << endl;
    myfun();
    Time t1;
    return 0;
}