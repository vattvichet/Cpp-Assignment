#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    double score;

public:
    void inputData()
    {
        cout << "Enter name and score" << endl;
        cin >> name;
        cin >> score;
    }
    void showData()
    {
        cout << "Name: " << name << "  Score: " << score << endl;
    }
    string getName()
    {
        return name;
    }
    void updateName(string newName)
    {
        name = newName;
    }
};

void search(Student stu[], int n)
{
    bool isFound = false;
    string searchName;
    cout << "Enter the search name: ";
    cin >> searchName;
    for (int i = 0; i < n; i++)
    {
        if (stu[i].getName() == searchName)
        {
            isFound = true;
        }
    }

    if (isFound == true)
    {
        cout << "Name Found" << endl;
    }
    else
    {
        cout << "Name not Found<<" << endl;
    }
}

// void update(Student stu[], int n)
// {

//     string updateName, newName;
//     cout << "Enter the name : ";
//     cin >> updateName;

//     for (int i = 0; i < n; i++)
//     {
//         if (stu[i].getName() == updateName)
//         {
//             cout << "Enter new name : ";
//             cin >> newName;
//             stu[i].getName() = newName;
//         }
//     }
// }
int main()
{
    int n;
    cout << "Enter n";
    cin >> n;

    Student *stu = new Student[n];
    for (int i = 0; i < n; i++)
    {
        stu[i].inputData();
    }
    cout << "Show Data" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     stu[i].showData();
    // }
    // update(stu, n);
    string newName;
    cout << "Enter the new name for the first student: ";
    cin >> newName;
    stu[0].updateName(newName);
    cout << "Show Data" << endl;
    for (int i = 0; i < n; i++)
    {
        stu[i].showData();
    }
    // search(stu, n);

    ///////// With no array
    //  Student stu;
    // stu.inputData();
    // cout << "Show Data" << endl;
    // stu.showData();

    return 0;
}