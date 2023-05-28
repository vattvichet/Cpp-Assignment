#include <iostream>
using namespace std;

class Test
{
private:
    int x;

public:
    Test() { this->x = 7; }

    Test(int x) { this->x = x; }
    Test(Test &other) { this->x = other.x; }
    ~Test()
    {
        cout << "Object x = " << x << " at position" << this << " was destroyed" << endl;
    }
    void set(int xx)
    {
        this->x = xx;
    }
    int getX()
    {
        return this->x;
    }
};

int main()
{
    Test b1;
    Test b2(55);
    Test b3(b2);

    cout << "b1 has value" << b1.getX() << endl;
    cout << "b2 has value" << b2.getX() << endl;
    cout << "b3 has value" << b3.getX() << endl;
    b1.set(88);

    Test *p = new Test(777);
    cout << "*p has value= " << p->getX() << endl;
    delete p;

    return 0;
}