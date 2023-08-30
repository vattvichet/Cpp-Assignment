#include <iostream>
using namespace std;

template <class T>
void listSort(T A[], const int n) // sorting function template
{
    T temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // if (A[i] > A[j])
            // {
            //     swap(A[i], A[j]);
            // }
            if (A[i] > A[j])
            {

                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "  ";
        cout << endl;
    }
}

// template <class T>    // template definition of swap
// void swap(T &x, T &y) // value passed on by referent
// {
//     T temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

int main()
{

    const int K = 6, J = 7, N = 5; // use const
    int age[J] = {20, 30, 70, 80, 40, 50, 60};
    char ch[N] = {'D', 'E', 'X', 'S', 'Z'};
    double avg[K] = {4.5, 5.6, 1.2, 7.8, 8.9, 3.2};
    //
    listSort(age, J);
    // display(age, J);
    //
    listSort(avg, K);
    // display(avg, K);
    //
    listSort(ch, N);
    // display(ch, N);
}