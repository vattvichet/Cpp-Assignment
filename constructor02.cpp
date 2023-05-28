#include <iostream>
using namespace std;
class MyClass
{
private:
    int a;
    double b;
    string c;

public:
    // constructor with parameter
    // MyClass()
    // {
    //     a = 0;
    //     b = 0;
    //     c = "";
    // }
    MyClass(int a, double b, string cha)
    {
        this->a = a;
        this->b = b;
        this->c = cha;
    }
    void showData()
    {
        cout << a << " " << b << " " << c << "\n";
    }
    void intput()
    {
        cout << "Enter a,b,c:";
        cin >> a;
        cin >> b;
        cin >> c;
    }
};
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    MyClass *c = new MyClass[n];
    for (int i = 0; i < n; i++)
    {
        c[i].intput();
    }
    for (int i = 0; i < n; i++)
    {
        c[i].showData();
    }
    // MyClass one(1, 55.5, "123");
    // one.showData();
    return 0;
}