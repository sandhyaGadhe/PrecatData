#include <iostream>
using namespace std;
#pragma pack(1)
class BankAccount
{
private:
    int accno;
    double balance;
    static double roi;

public:
    BankAccount(int accno, double balance)
    {
        this->accno = accno;
        this->balance = balance;
    }

    static void updateRoi()
    {
        cout << "Provide the updated roi - ";
        cin >> roi;
        // cout << balance; // NOT allowed
    }

    void displayAccountDetails()
    {
        cout << "Accno - " << accno << endl;
        cout << "Balance - " << balance << endl;
        cout << "Roi - " << roi << endl;
    }
};

// initialization of static data members
double BankAccount::roi = 5.5;

int main()
{
    BankAccount::updateRoi();

    BankAccount b1(1001, 10000);
    BankAccount b2(1002, 20000);
    BankAccount b3(1003, 30000);
    cout << "size of b1 - " << sizeof(b1) << endl;
    cout << "size of b2 - " << sizeof(b2) << endl;
    cout << "size of b3 - " << sizeof(b3) << endl;

    b1.displayAccountDetails();
    b2.displayAccountDetails();
    b3.displayAccountDetails();

    BankAccount::updateRoi();

    return 0;
}