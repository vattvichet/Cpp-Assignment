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
    // Get Methods
    int getID()
    {

        return id;
    }
    //
    string getName()
    {
        return name;
    }
    //
    string getGender()
    {
        return gender;
    }
    //
    double getSalary()
    {
        return salary;
    }
    // Set Methods

    // void setID(int i)
    // {
    //     id = i;
    // }
    // //

    // void setName(string n)
    // {
    //     name = n;
    // }
    // //
    // void setGender(string g)
    // {
    //     gender = g;
    // }
    // //
    // void setSalary(double sa)
    // {
    //     salary = sa;
    // }
    void inputData()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter gender: ";
        cin >> gender;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void outputData()
    {
        cout << getID() << "\t" << getName() << "\t" << getGender() << "\t" << getSalary() << endl;
    }
};
// None member function
void sortData(Employee em[], int n)
{
    Employee temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (em[i].getSalary() < em[j].getSalary())
            {
                temp = em[i];
                em[i] = em[j];
                em[j] = temp;
            }
        }
    }
}

int main()
{

    int i, n;
    cout << "Enter the number of employees: ";
    Employee *emp = new Employee[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        emp[i].inputData();
    }

    sortData(emp, n);
    for (int i = 0; i < n; i++)
    {
        emp[i].outputData();
    }
    return 0;
}