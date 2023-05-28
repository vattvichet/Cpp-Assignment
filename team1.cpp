#include <iostream>
using namespace std;

class Bank
{
private:
    int id;
    double money;

public:
    // Bank()
    // {
    //     id = 0;
    //     money = 0.0;
    // }
    // Bank(int _id, double _money)
    // {
    //     this->id = _id;
    //     this->money = _money;
    // }
    int getID()
    {
        return id;
    }
    void deposit(double addedMoney)
    {
        money += addedMoney;
    }
    void withdraw(double minusMoney)
    {
        money -= minusMoney;
    }
    void display()
    {
        cout << "ID: " << id << "\t"
             << "Money: " << money << endl;
    }
    void inputData()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Money: ";
        cin >> money;
    }
};

int main()
{
    int n;
    cout << "Enter number of banks: ";
    cin >> n;
    Bank *bank = new Bank[n];

    for (int i = 0; i < n; i++)
    {
        bank[i].inputData();
    }

    string option;
    double changedMoney;
    int id;
    //
    cout << "Enter D for deposit and W for withdraw : ";
    cin >> option;
    //
    cout << "Input the User's ID :";
    cin >> id;
    //
    cout << "Input Added Money :";
    cin >> changedMoney;

    if (option == "D")
    {
        for (int i = 0; i < n; i++)
        {
            if (bank[i].getID() == id)
            {
                bank[i].deposit(changedMoney);
            }
        }
        for (int i = 0; i < n; i++)
        {
            bank[i].display();
        }
    }
    else if (option == "W")
    {
        for (int i = 0; i < n; i++)
        {
            if (bank[i].getID() == id)
            {
                bank[i].withdraw(changedMoney);
            }
        }
        for (int i = 0; i < n; i++)
        {
            bank[i].display();
        }
    }
    else
    {
        cout << " Not Found";
    }

    delete[] bank; // deallocating the memory
    return 0;
}
