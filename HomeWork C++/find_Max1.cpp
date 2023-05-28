#include <iostream>

using namespace std;

double findMax(double a, double b)
{
    return a > b ? a : b;
}

int main()
{

    cout << "Max: " << findMax(10, 49) << endl;
    return 0;
}