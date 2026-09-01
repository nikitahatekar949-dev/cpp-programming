#include <iostream>
using namespace std;

class CheckingAccount
{
private:
    string acc_name;
    int acc_no;
    float balance;

public:
    // Constructor
    CheckingAccount(string name, int no, float bal)
    {
        acc_name = name;
        acc_no = no;
        balance = bal;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully." << endl;
    }

    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void display()
    {
        cout << "\n--- Checking Account Details ---" << endl;
        cout << "Account Name   : " << acc_name << endl;
        cout << "Account Number : " << acc_no << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    CheckingAccount c("Nikita", 92, 8000);

    c.display();

    c.deposit(3000);
    c.withdraw(2000);

    c.display();

    return 0;
}