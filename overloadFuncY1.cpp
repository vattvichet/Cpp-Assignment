#include <iostream>
using namespace std;

int add(int n1, int n2);
float add(float f1, float f2, float f3);
double add(double f1, double f2);

int main()
{
    cout << add(1, 2) << endl;
    cout << add(1.1, 2.2) << endl;
    cout << add(1.1, 2.2, 3.3) << endl;

    return 0;
}

int add(int n1, int n2)
{
    return n1 + n2;
}

float add(float f1, float f2, float f3)
{
    return f1 + f2 + f3;
}

double add(double f1, double f2)
{
    return f1 + f2;
}