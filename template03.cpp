#include <iostream>
using namespace std;

template <class T>
void Tsearch(T x[], int n)
{
    T s;
    bool isFound = false;
    int k = 0;
    cout << "Enter s : ";
    cin >> s;
    for (int i = 0; i < n; i++)
    {

        if (x[i] == s)
        {
            isFound = true;
            break;
        }
        k++;
    }

    if (isFound == true)
    {
        cout << "Number : " << s << " searching Found"
             << "  ( at arr[" << k << "] )  " << endl;
    }
    else
    {
        cout << "Number : " << s << " searching Not Found" << endl;
    }
}

int main()
{
    int m;
    double arr[m];
    cout << "Enter n : ";
    cin >> m;
    cout << "Input " << m << " elements into array :";

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    Tsearch(arr, m);

    return 0;
}