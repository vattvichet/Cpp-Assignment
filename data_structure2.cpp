#include <iostream>

using namespace std;

int findPGCD(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main()
{
    cout << (34 % 150) << endl;
    cout << (150 % 34) << endl;
    int result = findPGCD(34, 150);

    cout << "Result = " << result << endl;
    return 0;
}