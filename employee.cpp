#include<iostream>
using namespace std;
class Employee
{
    int empID;
    string empName;
    float empSalary;
    public:
    Employee()
    {
        empID=0;
        empName="unknown";
        empSalary=0;
    }
    Employee(int id,string name,float salary)
    {
        empID=id;
        empName=name;
        empSalary=salary;
    }
    Employee(const Employee &e)
    {
        empID=e.empID;
        empName=e.empName;
        empSalary=e.empSalary;
    }
    void display()
    {
        cout<<"Employee ID :"<<empID<<endl;
        cout<<"Employee Name :"<<empName<<endl;
        cout<<"Employee Salary :"<<empSalary<<endl;
    }
};
int main()
{
    Employee e1;
    cout<<"Default Constructor:"<<endl;
    e1.display();
    cout<<"\nParameterized Constructor:"<<endl;
    Employee e2(92,"Nikita",50000);
    e2.display();
    cout<<"\nCopy Constructor:"<<endl;
    Employee e3(e2);
    e3.display();
    return 0;
}