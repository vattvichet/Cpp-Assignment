#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    double salary;

public:
    string getName()
    {
        return name;
    }
    int getID()
    {
        return id;
    }
};

int main()
{

    int n;
    cout << "Enter n";
    cin >> n;

    return 0;
}