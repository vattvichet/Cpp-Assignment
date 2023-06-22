#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

class Employee
{
private:
    int id, age;
    string name;
    float rate, hours;

public:
    Employee()
    {
        id = 0;
        name = "Vichet";
        age = 20;
        rate = 0.0;
        hours = 0.0;
    }
    Employee(int i, string n, int a, float r, float h);

    friend ostream &operator<<(ostream &out, Employee &emp);
    friend ostream &operator>>(ostream &out, Employee &emp);
    float income();
};
Employee::Employee(int i, string n, int a, float r, float h)
{
    id = i;
    name = n;
    age = a;
    rate = r;
    hours = h;
}
int main()
{

    return 0;
}