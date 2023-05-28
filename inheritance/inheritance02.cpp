#include <iostream>
using namespace std;

class Person
{
protected:
    string id;
    string name;
    string gender;
    int age;
};
class Employee : private Person
{
private:
    float salary;

public:
    void inputData();
    void showData();
    float taxSalary();
};

void Employee ::inputData()
{
    cout << "Enter ID : ";
    cin >> id;
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Gender : ";
    cin >> gender;
    cout << "Enter Age : ";
    cin >> age;
    cout << "Enter Salary : ";
    cin >> salary;
}

void Employee::showData()
{
    cout << id << "\t" << name << "\t" << gender << "\t" << age << "\t" << taxSalary() << endl;
}
float Employee::taxSalary()
{
    if (salary < 550)
    {
        return salary * 0.05;
    }
    else
    {
        return salary * 0.07;
    }
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    Employee *emp = new Employee[n];
    for (int i = 0; i < n; i++)
    {
        emp[i].inputData();
    }
    cout << "Show Data:  " << endl;
    for (int i = 0; i < n; i++)
    {
        emp[i].showData();
    }

    return 0;
}