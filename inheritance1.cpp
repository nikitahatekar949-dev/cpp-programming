#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    void getData()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll no: ";
        cin >> rollNo;
    }
};

class StudentInfo : public Student
{
public:
    string branch;

    void getInfo()
    {
        cout << "Enter branch: ";
        cin >> branch;
    }
};

class StudentMarks : public StudentInfo
{
public:
    int marks;

    void getMarks()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Branch: " << branch << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    StudentMarks s;

    s.getData();
    s.getInfo();
    s.getMarks();
    s.display();

    return 0;
}
