#include <iostream>

using namespace std;

double findMax()
{
    double a = 40, b = 49;
    return a > b ? a : b;
}

int main()
{

    cout << "Max: " << findMax() << endl;
    return 0;
}