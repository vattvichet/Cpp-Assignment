#include <iostream>
using namespace std;

int main()
{
    double salary, tax, total;

    cout << "Enter your salary: ";
    cin >> salary;

    if (salary < 350)
    {
        tax = salary * 0.03;
    }
    else if (salary >= 350 && salary < 750)
    {
        tax = salary * 0.05;
    }
    else if (salary >= 750 && salary < 1500)
    {
        tax = salary * 0.1;
    }
    else
    {
        tax = salary * 0.15;
    }

    cout << "Tax :" << tax << endl;
    total = salary - tax;

    cout << "Total : " << total << endl;

    return 0;
}