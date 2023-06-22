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
    Vector() {}
    Vector operator++(int) // post increment operator++
    {
        x += 1;
        y += 1;
        z += 1;
        return Vector((x - 1), (y - 1), (z - 1));
    }
    Vector operator++() // pre increment operator++
    {
        x += 1;
        y += 1;
        z += 1;
        return Vector((x - 1), (y - 1), (z - 1));
    }
    Vector operator--()
    {
        x -= 1;
        y -= 1;
        z -= 1;
        return Vector((x + 1), (y + 1), (z + 1));
    }
    Vector operator--(int)
    {
        x -= 1;
        y -= 1;
        z -= 1;
        return Vector((x + 1), (y + 1), (z + 1));
    }
    void display()
    {
        cout << "x =" << x << "\ty =" << y << "\tz =" << z << endl
             << endl;
    }
};
int main()
{
    cout << endl
         << endl;
    Vector v1(4, 5, 6), v2(21, 22, 23), v3(1, 2, 3), v4(11, 12, 13);
    cout << "Initial V1-Components are: \t\t";
    v1.display();
    cout << "After post increment V1-Components are: ";
    (v1++).display();
    cout << "Now V1-Component are: \t\t\t";
    v1.display();
    //
    cout << "Initial V2-Components are: \t\t";
    v2.display();
    cout << "After post increment V2-Components are: ";
    (++v2).display();
    cout << "Now V2-Component are: \t\t\t";
    v2.display();
    //
    cout << "Initial V3-Components are: \t\t";
    v3.display();
    cout << "After post increment V3-Components are: ";
    (v3--).display();
    cout << "Now V3-Component are: \t\t\t";
    v3.display();
    //
    cout << "Initial V4-Components are: \t\t";
    v4.display();
    cout << "After post increment V4-Components are: ";
    (--v4).display();
    cout << "Now V4-Component are: \t\t\t";
    v4.display();
    return 0;
}