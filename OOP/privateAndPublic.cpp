#include <iostream>
using namespace std;
class Employee
{

private:
    string id;
    string name;
    string gender;
    int age;
    double salary;

public:
    void inputData()
    {
        cout << "data printed";
    }
    void outputData() {}
};

int main()
{

    Employee employee = Employee();
    employee.inputData();
    return 0;
}