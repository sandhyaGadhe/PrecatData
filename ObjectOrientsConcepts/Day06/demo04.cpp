#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Hello" << endl;
    cout << "World" << endl;

    int num = 28;
    // cout << "hex - " << hex << num << endl;
    // cout << "oct - " << oct << num << endl;

    cout << "hex - " << setbase(16) << num << endl;
    cout << "oct - " << setbase(8) << num << endl;

    double num1 = 12.3456;
    cout << "num1 - " << fixed << setprecision(2) << num1 << endl;

    string name = "sunbeam";
    cout << setw(10) << name << endl;

    string creditcardno = "6789";
    cout << setw(12) << setfill('X') << creditcardno << endl;
    return 0;
}