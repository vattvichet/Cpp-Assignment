#include <iostream>
using namespace std;

class Vector
{
private:
    int x, y, z;

public:
    Vector(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    Vector(){};
    Vector operator+(Vector s)
    {
        x = x + s.x;
        y = y + s.y;
        z = z + s.z;
        return Vector(x, y, z);
    }
    void display()
    {
        cout << "x component = " << x << endl;
        cout << "y component = " << y << endl;
        cout << "z component = " << z << endl;
    }
};

int main()
{
    Vector v1(2, 4, 5);
    Vector v2(6, 5, 8);
    Vector v3;
    v3 = v1 + v2;
    v3.display();
    cout << endl;
    v1.display();
    v2.display();
    return 0;
}