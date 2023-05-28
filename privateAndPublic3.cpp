#include <iostream>
using namespace std;

class Employee
{

private:
    string id;
    string name;
    double salary, tax, total;
    //
public:
    void inputData()
    {
        cout << "Enter ID / Name / Salary (respectively): " << endl;
        cin >> id;
        cin >> name;
        cin >> salary;
    }
    void displayData()
    {
        cout << "ID: "
             << id << "\t"
             << "Name: "
             << name
             << "\t";
        taxSalary();
        cout << endl;
    }
    void taxSalary()
    {
        if (salary < 500)
        {
            total = salary - (salary * 0.2);
        }
        else
        {
            total = salary - (salary * 0.3);
        }
        cout << "Total Salary: " << total;
    }
};

int main()
{
    int n;
    cout << "Enter the amount of employee: ";
    cin >> n;
    //
    // Create new array with Employee class // Dynamic array size
    Employee *employee = new Employee[n];
    for (int i = 0; i < n; i++)
    {
        employee[i].inputData();
    }
    cout << endl
         << endl;
    cout << "Display:" << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        employee[i].displayData();
    }

    return 0;
}