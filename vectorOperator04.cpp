#include <iostream>
using namespace std;
class Vector
{
    int x, y, z; // private by default

public:
    Vector()
    {
        x = 3;
        y = 2;
        z = 1;
    }
    Vector(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    void operator==(Vector S) // operator== is used for the comparision
    {
        if (x == S.x && y == S.y && z == S.z)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
    void display()
    {
        cout << "Vector = (" << x << ", " << y << ", " << z << ")" << endl
             << endl;
    }
};

int main()
{
    Vector v1(2, 4, 5), v2(6, 5, 8), v3(6, 5, 8);
    //
    cout << "Comparing v1 to v2: " << endl
         << endl;
    v1 == v2;
    cout << endl
         << endl;
    //
    cout << "Comparing v2 to v3: " << endl
         << endl;
    v2 == v3;
    cout << endl
         << endl;
    //
    v1.display();
    v2.display();
    v3.display();

    return 0;
}