#include <iostream>

using namespace std;

void findMax(double a, double b)
{

    a > b ? cout << " Max: " << a << endl
          : cout << " Max: " << b << endl;
}

int main()
{
    findMax(20, 49);
    return 0;
}