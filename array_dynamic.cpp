#include <iostream>
using namespace std;

void input_array(int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "[" << i << "]";
        cin >> x[i];
    }
}

void output_array(int x[], int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << x[i] << "\t "
             << "endl ";
    }
}
int main()
{
    int n;
    cout << "Enter n =";
    cin >> n;
    cout << endl;
    int *a = new int[n];
    input_array(a, n);
    cout << "\n";
    output_array(a, n);
    return 0;
}