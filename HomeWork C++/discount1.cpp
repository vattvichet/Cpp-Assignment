#include <iostream>
using namespace std;

double discount(string type, double price)
{
    double total;
    //
    type == "student" ? total = price - (price * 0.3) : total = price - (price * 0.15);
    //
    return total;
}

int main()
{

    string type;
    double price;
    cout << "Enter Type: " << endl;
    cin >> type;
    cout << "Enter the Price: " << endl;
    cin >> price;

    cout << "Total price after discount = " << discount(type, price) << endl;
    return 0;
}