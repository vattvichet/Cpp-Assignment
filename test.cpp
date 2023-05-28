#include <iostream>
using namespace std;

int main()
{

    double math = 2;
    double phy = 2;
    double khmer = 3;

    double average;

    average = (math + phy + khmer) / 3;
    cout.precision(2);
    cout << "Result :" << average << endl;
    return 0;
}