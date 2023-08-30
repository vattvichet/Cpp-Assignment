#include <iostream>
using namespace std;

class FirstClass
{
protected:
    int number1;
    int number2;

public:
    void input()
    {
        cout << "Enter number 1: ";
        cin >> number1;
        cout << "Enter number 2: ";
        cin >> number2;
    }

    int sum()
    {
        return number1 + number2;
    }
};

class SecondClass : public FirstClass
{
protected:
    int number3;

public:
    void input()
    {
        FirstClass::input();
        cout << "Enter number 3: ";
        cin >> number3;
    }

    int sum()
    {
        return FirstClass::sum() + number3;
    }
};

class ThirdClass : public SecondClass
{
protected:
    int number4;

public:
    void input()
    {
        SecondClass::input();
        cout << "Enter number 4: ";
        cin >> number4;
    }

    int sum()
    {
        return SecondClass::sum() + number4;
    }
};

int main()
{
    ThirdClass obj;
    obj.input();
    cout << "Sum: " << obj.sum() << endl;

    return 0;
}
