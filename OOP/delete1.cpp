#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    void input()
    {
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
    }
    void output()
    {
        cout << "x= " << x << "\t"
             << "y= " << y << endl;
    }
};

int main()
{
    int n;
    cout << "input number of point: ";
    cin >> n;
    Point *p = new Point[n];
    cout << "input n points: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "point[" << (i + 1) << "]: " << endl;
        p[i].input();
    }
    for (int i = 0; i < n; i++)
    {
        p[i].output();
        cout << endl;
    }
    delete[] p;
    return 0;
}