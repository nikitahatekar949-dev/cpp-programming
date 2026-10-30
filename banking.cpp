#include <iostream>
#include <string>
using namespace std;

class Account
{
protected:
    int accountNo;
    string name;
    double balance;

public:
    void getDetails()
    {
        cout << "Enter Account Number: ";
        cin >> accountNo;

        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    virtual void deposit()
    {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        }
        else
        {
            cout << "Invalid amount.\n";
        }
    }

    virtual void withdraw()
    {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }

    virtual void displayStatement()
    {
        cout << "\n--- Account Statement ---\n";
        cout << "Account Number: " << accountNo << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    virtual ~Account() {}
};

class SavingsAccount : public Account
{
public:
    void displayStatement() override
    {
        cout << "\nAccount Type: Savings Account\n";
        Account::displayStatement();
    }
};

class CheckingAccount : public Account
{
public:
    void displayStatement() override
    {
        cout << "\nAccount Type: Checking Account\n";
        Account::displayStatement();
    }
};

int main()
{
    Account *account;
    SavingsAccount savings;
    CheckingAccount checking;

    int type, choice;

    cout << "Select Account Type:\n";
    cout << "1. Savings Account\n";
    cout << "2. Checking Account\n";
    cout << "Enter choice: ";
    cin >> type;

    if (type == 1)
        account = &savings;
    else if (type == 2)
        account = &checking;
    else
    {
        cout << "Invalid account type.\n";
        return 0;
    }

    account->getDetails();

    do
    {
        cout << "\n--- Banking Menu ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Account Statement\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            account->deposit();
            break;

        case 2:
            account->withdraw();
            break;

        case 3:
            account->displayStatement();
            break;

        case 4:
            cout << "Thank you for using our banking system.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}