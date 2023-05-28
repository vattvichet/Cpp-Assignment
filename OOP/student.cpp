#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    string name;
    double average;

public:
    Student(int i, string n, double a)
    {
        this->id = i;
        this->name = n;
        this->average = a;
    }
    void inputData()
    {
        cout << "Enter id / name / average :" << endl;
        cin >> id;
        cin >> name;
        cin >> average;
    }
    void outputData()
    {
        cout << id << "\t" << name << "\t" << average << endl;
    }
    void heading()
    {
        cout << "\nID\tNAME\t\tAverage\n";
        cout << "=======================";
        cout << endl;
    }
};

int main()
{
    for (int i = 0; i < 2; i++)
    {
        Student(1, "d", 0.1).inputData();
    }
    for (int i = 0; i < 2; i++)
    {
        Student(1, "d", 0.1).;
    }

    return 0;
}