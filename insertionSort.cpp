#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int item = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than item, to one position ahead of their current position
        while (arr[j] > item && j >= 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = item;
    }
}

int main()
{
    int arr[] = {45, 87, 27, 93, 60, 58, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }

    insertionSort(arr, n);

    std::cout << "\nSorted array: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
