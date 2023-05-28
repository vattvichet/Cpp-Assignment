#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    string gender;
    double salary;

public:
    void inputData()
    {
        cout << "Enter ID / Name / Gender / Salary (respectively): " << endl;
        cin >> id;
        cin >> name;
        cin >> gender;
        cin >> salary;
    }
    void displayData()
    {
        cout << "ID: "
             << id << "\t"
             << "Name: "
             << name
             << "\t"
             << "Gender: "
             << gender
             << "\t"
             << "Salary: "
             << salary
             << endl;
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