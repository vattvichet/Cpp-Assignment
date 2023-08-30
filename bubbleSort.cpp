#include <iostream>
using namespace std;

void bubbleSort(float arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            };
        }
    }
}

int main()
{
    float array[7] = {45, 87, 27, 93, 60, 58, 13};

    bubbleSort(array, 7);
    std::cout << "\nSorted array: ";
    for (int i = 0; i < 7; ++i)
    {
        std::cout << array[i] << "  ";
    }
}