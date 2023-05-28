#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    int id;
    string name;
    string sex;
    float salary;

public:
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    string getSex()
    {
        return sex;
    }
    float getSalary()
    {
        return salary;
    }
    void setId(int i)
    {
        id = i;
    }
    void setName(string n)
    {
        name = n;
    }
    void setSex(string s)
    {
        sex = s;
    }
    void setSalary(float sa)
    {
        salary = sa;
    }
    void input_Data();
    void output_Data();
};
void Employee::input_Data()
{
    cout << "Enther id  = ";
    cin >> id;
    cout << "Enther Name = ";
    cin >> name;
    cout << "Enther Sex = ";
    cin >> sex;
    cout << "Enther Salary =";
    cin >> salary;
}
void Employee::output_Data()
{
    cout << getId() << '\t' << getName() << '\t' << getSex() << '\t' << getSalary() << endl;
}
void sort_Data(Employee em[], int n)
{
    int i, j;
    Employee temp;
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (em[i].getSalary() < em[j].getSalary())
            {
                temp = em[i];
                em[i] = em[j];
                em[j] = temp;
            }
}
int main()
{
    int i, n;
    cout << "Enther n = ";
    cin >> n;
    Employee *emp = new Employee[n];
    for (i = 0; i < n; i++)
    {
        emp[i].input_Data();
    }

    sort_Data(emp, n);
    //   for (i = 0; i < n; i++)
    //     ;
    // emp[i].output_Data();

    for (i = 0; i < n; i++)

    {
        emp[i].output_Data();
    }
}