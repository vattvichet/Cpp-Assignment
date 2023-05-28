#include <iostream>
using namespace std;

int findFactorial(int n)
{
    int sumOfFactorial = 0;
    for (int i = 1; i <= n; i++)
    {
        int factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        sumOfFactorial += factorial;
    }
    return sumOfFactorial;
}
int main()
{
    int result = findFactorial(5);
    cout << "Result = " << result << endl;
    return 0;
}