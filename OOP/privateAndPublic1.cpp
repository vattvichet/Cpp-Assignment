#include <iostream>
using namespace std;
class Student
{

private:
    string id;
    string name;
    string gender;
    int age;
    double average;

public:
    void inputData()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> gender;
        cout << "Enter average: ";
        cin >> average;
    }
    void outputData()
    {
        cout << "Input ID :" << id << endl;
        cout << "Input Name :" << name << endl;
    }
};

int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;
    Student *student = new Student[n];
    for (int i = 0; i < n; i++)
    {
        student[i].inputData();
    }
    for (int i = 0; i < n; i++)
    {
        student[i].outputData();
    }
    // Student student = Student();
    // student.inputData();
    // student.outputData();
    return 0;
}