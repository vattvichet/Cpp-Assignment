#include <iostream>

using namespace std;

class MyClass
{
    static int total;

public:
    MyClass()
    {
        total++;
    }
    ~MyClass() { cout << total-- << endl; }
    int getTotal()
    {
        return total;
    }
};
int MyClass ::total = 0;
int main()
{
    MyClass obj1;
    cout << obj1.getTotal() << endl;
    MyClass obj2;
    MyClass obj3;
    MyClass obj4;
    cout << obj1.getTotal() << endl;
    MyClass *p = new MyClass;
    if (!p)
    {
        cout << "Allocation error \n";
        return 1;
    }

    cout << obj1.getTotal();
    cout << "\t object after allocation \n";
    delete p;
    cout << obj1.getTotal();
    cout << "\t object after delete \n";
    return 0;
}