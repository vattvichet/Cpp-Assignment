#include <iostream>
using namespace std;

class Employee
{
private:
    string id;
    string name;
    int age;
    double salary;

public:
    // Default constructor
    Employee()
    {
        id = "001";
        name = "vichet";
        age = 19;
        salary = 300;
    }
    void showData()
    {
        cout << id << "\t" << name << "\t" << age << "\t" << salary << endl;
    }
};
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    Employee *emp = new Employee[n];
    for (int i = 0; i < n; i++)
    {
        emp[i].showData();
    }

    return 0;
}