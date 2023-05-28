#include <iostream>
using namespace std;

class Employee
{
private:
    string name;

public:
    void
    inputData()
    {
        cin >> name;
    }

    string getName()
    {
        return name;
    }
};

void searchData(Employee em[], int n)
{
    bool isFound = false;
    string searchName;
    cout << "Enter name to search = ";
    cin >> searchName;

    for (int i = 0; i < n; i++)
    {

        if (em[i].getName() == searchName)
        {
            isFound = true;
            if (isFound == true)
            {
                cout << "Name Found" << endl;
            }
        }
    }
    if (isFound == false)
    {
        cout << "Name Not Found" << endl;
    }
}
int main()
{

    int n;
    cout << "Enter the employee: ";
    cin >> n;
    //
    Employee *emp = new Employee[n];
    cout << "Enter Name : " << endl;
    for (int i = 0; i < n; i++)
    {
        emp[i].inputData();
    }
    searchData(emp, n);

    return 0;
}