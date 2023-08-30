#include <iostream>

class base
{
public:
    virtual void output() const
    {
        std::cout << "Base class output" << std::endl;
    }
};

class first : public base
{
public:
    void output()
    {
        std::cout << "First class output" << std::endl;
    }
};

class second : public base
{
public:
    void output()
    {
        std::cout << "Second class output" << std::endl;
    }
};

int main()
{
    base *p;
    first fobj;
    second sobj;

    p = &fobj;
    p->output(); // Output will be "First class output"

    p = &sobj;
    p->output(); // Output will be "Second class output"

    return 0;
}