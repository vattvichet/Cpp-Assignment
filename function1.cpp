#include <iostream>
using namespace std;

// Function Declaration, Use it when its function stays under int main()
//  double average(double, double);

double average(double e, double m) // Function Definition
{

    return (e + m) / 3;
}
int main()
{

    double result = average(5, 5);
    cout << "Average = " << result << endl;

    return 0;
}
// double average(double e, double m)
// {

//     return (e + m) / 3;
// }