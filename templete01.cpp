#include <iostream>
using namespace std;

template <class T>

T max(T n[], int m)
{
    T z = n[0];
    for (int i = 1; i < m; i++)
    {
        if (n[i] > z)
        {
            z = n[i];
        }
    }
    return z;
}

// template <class T>
// void sort(T n[], int m){
//     T temp;
//     for (int i = 0; i < m; i++)
//     {
//         for(int j = i+1; n<m; i++){
// if()
//         }

//     }
//     return z;
// }

int main()
{

    int u[11] = {
        6,
        2,
        10,
        23,
        1,
        39,
        12,
        23,
        4,
        5,
    },
        m, i;
    int y;

    for (int i = 0; i < 10; i++)
    {
        cout << u[i] << "  ";
        m = max(u, 10);
    }
    cout << "\n Max : " << m << endl;
    return 0;
}