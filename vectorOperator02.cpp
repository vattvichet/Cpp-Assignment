#include <iostream>
using namespace std;
class Vector
{
private:
    int x, y, z;

public:
    void setValue(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void operator+=(Vector P)
    {
        x = x + P.x;
        y = y + P.y;
        z = z + P.z;
    }
    void operator-=(Vector P)
    {
        x = x - P.x;
        y = y - P.y;
        z = z - P.z;
    }

    void display()
    {
        cout << "x =" << x << "\ty =" << y << "\tz =" << z << endl;
    }
};
int main()
{
    Vector v1, v2, v3;
    v1.setValue(12, 4, 6);
    v2.setValue(2, 5, 7);
    v3.setValue(4, 5, 6);
    v1 += v2;
    v3 -= v2;
    cout << "Components of v1 are : ";
    v1.display();
    cout << "Components of v3 are : ";
    v3.display();
    cout << "Components of v2 are : ";
    v2.display();

    return 0;
}