#include <iostream>
using namespace std;
class Base
{
public:
    int value;
    Base(int v) : value(v) {}

    Base operator+(int num)
    {
        return Base(value + num);
    }
    friend Base operator+(int num1, Base &obj)
    {
        return Base(num1 + obj.value);
    }
};

int main()
{
    Base obj2(8);
    Base obj4 = obj2 + 10;
    cout << "Obj4.value: " << obj4.value << endl;
}