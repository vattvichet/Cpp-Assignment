#include <iostream>

using namespace std;

double discount()
{
    string type;
    double price, total;
    cout << "Enter Type: " << endl;
    cin >> type;
    cout << "Enter the Price: " << endl;
    cin >> price;
    //
    type == "student" ? total = price - (price * 0.3) : total = price - (price * 0.15);
    //
    return total;
}
int main()
{

    double total = discount();

    cout << "Total price after discount = " << total << endl;

    return 0;
}