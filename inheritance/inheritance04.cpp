
// Sharing member variables between derive class

#include <iostream>
using namespace std;

class AreaClass
{
protected:
    double height;
    double width;
};
class Rectangle : public AreaClass
{
public:
    Rectangle(double h; double w)
    {
        height = h;
        width = w;
    }
    double area()
    {
        return height * width;
    }
};
class Isosceles : public AreaClass
{
public:
    Isosceles(double h, double w)
    {
        height = h;
        width = w;
    }
    double area()
    {
        return 0.5 * height * width;
    }
};

int main()
{
    return 0;
}