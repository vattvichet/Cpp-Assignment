#include <iostream>
using namespace std;

class B
{
public:
    int m, a;

public:
    int product1()
    {
        return a * m;
    }
};

class D : public B
{
public:
    int n;
    int product2()
    {
        return n * product1();
    }
};
int main()
{

    D c1; // D = Class D
    c1.m = 5;
    c1.a = 4;
    c1.n = 2;
    //
    cout << endl
         << endl;
    cout << "The Product1's result is : " << c1.product1() << endl;
    //
    cout << endl;
    //
    cout << "The Product2's result is : " << c1.product2() << endl;
    cout << endl
         << endl;

    return 0;
}