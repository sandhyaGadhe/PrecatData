#include <iostream>
using namespace std;

class BankAccount
{
private:
    const int accno;
    mutable double balance;

public:
    // ctor members initializer list
    BankAccount(int accno, double balance) : accno(accno)
    {
        // this->accno = accno; // NOT OK
        this->balance = balance;
    }

    // Not Allowed
    // void setAccno(int accno)
    // {
    //     this->accno = accno;
    // }

    void deposit(double amt) const
    {
        this->balance = this->balance + amt;
    }

    void withdraw(double amt)
    {
        this->balance = this->balance - amt;
    }

    void displayAccountDetails() const
    {
        // this->balance = 15000; // NOT OK
        cout << "Accno - " << accno << endl;
        cout << "Balance - " << balance << endl;
    }
};

int main()
{
    const int num1 = 10;
    // num1 = 20; // NOT ALLOWED

    // BankAccount b1(1001, 10000);
    // b1.displayAccountDetails();
    // b1.deposit(2000);

    // BankAccount b2(1002, 20000);
    // b2.displayAccountDetails();
    // b2.withdraw(3000);

    // b1.displayAccountDetails();
    // b2.displayAccountDetails();

    const BankAccount b3(1003, 15000);
    b3.displayAccountDetails();
    b3.deposit(3000);
    return 0;
}