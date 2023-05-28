#include <iostream>
using namespace std;
int sum(int x, int y)
{
    return x + y;
}
float sum(float a, float b)
{
    return a + b;
}
int sum(int x, int y, int z)
{
    return x + y + z;
}

int main()
{
    int m = 10, n = 20, p = 30;
    float c = 12.5, d = 34.00;
    cout << "sum (m,n) = " << sum(m, n) << endl;
    cout << "sum (c,d) = " << sum(c, d) << endl;
    cout << "sum (m,n,p) = " << sum(m, n, p) << endl;
    return 0;
}
