#include<iostream>
using namespace std;
class Saving
{
    private:
        string acc_name;
        int acc_no;
        float balance;
        float interest_rate;
    public:
        Saving(string name,int no,float bal,float rate)
        {
            acc_name=name;
            acc_no=no;
            balance=bal;
            interest_rate=rate;
        } 
        void deposit(float amount)
        {
            balance=balance+amount;
            cout<<"Amount deposited successfully."<<endl;
        }   
        void withdraw(float amount)
        {
            if(amount<=balance)
            {
                balance=balance-amount;
                cout<<"Amount withdrawn successfully."<<endl;
            }
            else
            {
                cout<<"Insuffficient balance."<<endl;
            }
        }
        void apply_interest()
        {
            float interest=balance*interest_rate/100;
            balance=balance+interest;
            cout<<"Interest applied successfully."<<endl;
        }
        void display()
        {
            cout<<"\n---Saving account details---"<<endl;
            cout<<"Account name:"<<acc_name<<endl;
            cout<<"Account number:"<<acc_no<<endl;
            cout<<"Balance:"<<balance<<endl;
            cout<<"Interest Rate:"<<interest_rate<<"%"<<endl;
        }
};
int main()
{
    Saving s("Nikita",92,5000,5);
    s.display();
    s.deposit(2000);
    s.withdraw(1000);
    s.apply_interest();
    s.display();
    return 0;
}