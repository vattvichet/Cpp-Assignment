#include <iostream>
using namespace std;
void sum(int a, int b, int c = 5, int d = 10);

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    cout << "Enter two number: ";
    cin >> a;
    cin >> b;
    cout << endl;
    sum(a, b); // we dont use c and d, because they are already declared
    sum(a, b, c, d);
    sum(a, b, 3, 4);

    return 0;
}

void sum(int a, int b, int c, int d)
{
    int temp = a + b + c + d;
    cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << endl;
    cout << "sun = " << temp << endl;
    cout << endl;
}