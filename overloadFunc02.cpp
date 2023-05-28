#include <iostream>
using namespace std;

int maximum(int x[], int n)
{
    int max;
    max = x[0];
    for (int i = 0; i < n; i++)
    {
        if (max < x[i])
        {
            max = x[i];
        }
    }
    return max;
}
float maximum(float x[], int n)
{
    float max;
    max = x[0];
    for (int i = 0; i < n; i++)
    {
        if (max < x[i])
        {
            max = x[i];
        }
    }
    return max;
}
int main()
{
    int a[5] = {21, 2, 56, 12, 4};
    float b[5] = {21.3, 34.4, 22, 12.6, 1.1};
    cout << "Maximum (integer) = " << maximum(a, 5) << endl;
    cout << "Maximum (float) = " << maximum(b, 5) << endl;

    return 0;
}