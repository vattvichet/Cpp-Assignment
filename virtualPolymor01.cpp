#include <iostream>
using namespace std;

class A
{
protected:
    int x;

public:
    virtual void input()
    {
        cout << "Input number x = ";
        cin >> x;
    }
    virtual int sum()
    {
        return x + x;
    }
    virtual void display()
    {
        cout << "Sun of x = " << sum() << endl;
    }
};
class B : public A
{
protected:
    int y;

public:
    void input()
    {
        cout << "Input number y = ";
        cin >> y;
    }
    int sum()
    {
        return y + y;
    }
    void display()
    {
        cout << "Sun of y = " << sum() << endl;
    }
};
class C : public A
{
protected:
    int z;

public:
    void input()
    {
        cout << "Input number z = ";
        cin >> z;
    }
    int sum()
    {
        return z + z;
    }
    void display()
    {
        cout << "Sun of z = " << sum() << endl;
    }
};

int main()
{
    A a;
    B b;
    C c;
    A *obj[] = {&a, &b, &c};
    for (int i = 0; i < 3; i++)
    {
        obj[i]->input();
    }
    for (int i = 0; i < 3; i++)
    {
        obj[i]->display();
    }
    return 0;
}