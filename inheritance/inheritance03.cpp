#include <iostream>
using namespace std;

class BaseClass
{
protected:
    int i, j;

public:
    void set(int a, int b)
    {
        i = a;
        j = b;
    }
    void show()
    {
        cout << i << "  " << j << endl;
    }
};

class DerivedClass1 : public BaseClass
{
    int k;

public:
    void setK()
    {
        k = i * j;
    }
    void showK()
    {
        cout << k << endl;
    }
};

class DerivedClass2 : public DerivedClass1
{
    int m;

public:
    void
    setM()
    {
        m = i - j;
    }
    void showM()
    {
        cout << m << endl;
    }
};
int main()
{
    DerivedClass1 object1;
    DerivedClass2 object2;

    object1.set(2, 3);
    object1.show();
    object1.setK();
    object1.showK();

    object2.set(3, 4);
    object2.show();
    object2.setK();
    object2.setM();
    object2.showK();
    object2.showM();

    return 0;
}