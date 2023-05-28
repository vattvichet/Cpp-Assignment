#include <iostream>

using namespace std;

void findMax()
{
    int a = 30, b = 49;
    a > b ? cout << " Max: " << a << endl
          : cout << " Max: " << b << endl;
}

int main()
{
    findMax();
    return 0;
}