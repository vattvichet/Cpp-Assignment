#include <iostream>
using namespace std;
double average(double math, double english)
{
    return (math + english) / 2;
}

string grade(double average)
{
    if (average >= 8)
    {
        return "A";
    }
    else
    {
        return "B";
    }
}

void result(double average, string grade)
{
    cout << "Average: " << average << "||"
         << "grade: " << grade << endl;
}
int main()
{
    double math, english, av;
    string g;

    cout << "Enter math and English score:" << endl;
    cin >> math;
    cin >> english;
    av = average(math, english);
    g = grade(av);
    result(av, g);

    return 0;
}
