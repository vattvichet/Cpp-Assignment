#include <iostream>

using namespace std;

void discount()
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
    cout << "Total price after discount = " << total << endl;
}
int main()
{

    discount();
    return 0;
}