#include <iostream>
using namespace std;

void selectionSort(float a[], int n)
{
    float temp;
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        swap(a[i], a[min]);
        cout << "process " << i + 1 << " : ";
        for (int i = 0; i < n; i++)
        {

            cout << a[i] << "  ";
        }
        cout << endl;
        // temp = a[min];
        // a[min] = a[i];
        // a[i] = temp;
    }

    // cout << "Sorted:" << endl;
}
int main()
{

    // float array[5] = {1, 5, 2, 10, 0};
    float array[7] = {45, 87, 27, 93, 60, 58, 13};

    selectionSort(array, 7);
}