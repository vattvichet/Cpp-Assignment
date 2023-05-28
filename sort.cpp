#include <iostream>

using namespace std;

void inputArray(int x[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "[" << i << "] : ";
        cin >> x[i];
    }
}

void outputArray(int x[], int n)
{
    for (int i = 0; i < n; i++)
    {

        cout << "\t" << x[i];
    }
    cout << endl
         << endl;
}

void sortArray(int x[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << x[i];
    }
    cout << endl;
}

void onSearch(int x[], int n)
{
    int inputNumber;
    cout << "Enter search number: ";

    cin >> inputNumber;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == inputNumber)
        {
            cout << "Found Number : " << inputNumber << "in array." << endl;
            break;
        }
    }
}

void onUpdate(int x[], int n)
{
    int index, updateNumber;
    cout << "Enter Index :";
    cin >> index;
    cout << "Enter new number";
    cin >> updateNumber;
    x[index] = updateNumber;
    cout << "New Array: ";
    if (index >= 0 && index < n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "\t" << x[i];
        }
        cout << endl;
    }
    else
    {
        cout << "Index not Found" << endl;
    }
}

void onDelete(int x[], int &n)
{

    int i, j, num;
    cout << "Enter number to delete :";
    cin >> num;
    for (i = 0; i < n; i++)
    {
        if (x[i] == num)
        {
            for (j = i; j < n; j++)
            {
                x[j] = x[n + 1];
                n--;
            }
        }
    }
}

int main()
{
    int n;
    int *a = new int[n];
    cout << "Enter the amount of elements :";
    cin >> n;
    inputArray(a, n);
    cout << endl;
    cout << "Before sorting : ";
    outputArray(a, n);
    // cout << " After sorting : ";
    // sortArray(a, n);
    // onSearch(a, n);
    // onUpdate(a, n);
    onDelete(a, n);
    // output after array
    outputArray(a, n);

    return 0;
}