#include <iostream>
using namespace std;
class Student
{

private:
    string id;
    string name;
    double math, eng, phy;

public:
    void inputData()
    {
        cout << "Enter subject's score: ID/Name Math/English/Physic";
        cin >> id;
        cin >> name;
        cin >> math;
        cin >> eng;
        cin >> phy;
    }
    void outputData()
    {
        cout << "ID: " << id << "\t Name: " << name << "\t Math : " << math
             << "\t English: " << eng << "\t Physic: " << phy;
    }
    double average()
    {
        return (math + eng + phy) / 3;
    }
    string grade()
    {
        if (average() >= 8)
        {
            return "A";
        }
        else if (average() >= 5 && average() < 8)
        {
            return "B";
        }
        else
        {
            return "C";
        }
    }
};

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    //
    Student *student = new Student[n];
    for (int i = 0; i < n; i++)
    {
        student[i].inputData();
    }
    cout << endl
         << endl;
    cout << "Display:" << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "---------------------------------------------------";
        cout << "---------------------------------------------------";
        cout << endl;
        student[i].average();
        student[i].outputData();
        cout << "\t"
             << "Grade: " << student[i].grade();
        cout << endl
             << endl;
        cout << "---------------------------------------------------";
        cout << "---------------------------------------------------";
        cout << endl;
    }

    return 0;
}