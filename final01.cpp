#include <fstream.h>
#include <iostream.h>
#include <iomanip.h>

class Student
{
protected:
    ​ char name[10];        // ការប្រកាសអញ្ញាត name ជា array ប្រភេទ char ចំនួន 10តួអក្សរ
    ​ int age;              // ការប្រកាសអញ្ញាត age ជាប្រភេទ int មានលក្ខណៈ protected
    ​ char sex;             // ការប្រកាសអញ្ញាត sex ជាប្រភេទ char មានលក្ខណៈ protected
    ​ float height, weight; // ការប្រកាសអញ្ញាត height, weight ជាប្រភេទ float
public:
    ​ void getdata(); // ការប្រកាសអនុគមន៍ getdata() មានលក្ខណៈ public
    ​ void display(); // ការប្រកាសអនុគមន៍ display() មានលក្ខណៈ public
};
void Student::getdata()
{
    cout << "Enter the following information :\n";
    cout << "Name : ";   // ការបង្ហាញអក្សរ Name : មកលើអេក្រង់
    cin >> name;         // បញ្ចូលតម្លៃឲ្យ name តាមរយៈ keyboard
    cout << "Age : ";    // ការបង្ហាញអក្សរ Age : មកលើអេក្រង់
    cin >> age;          // បញ្ចូលតម្លៃឲ្យ age តាមរយៈ keyboard
    cout << "Sex : ";    // ការបង្ហាញអក្សរ Sex : មកលើអេក្រង់
    cin >> sex;          // បញ្ចូលតម្លៃឲ្យ sex តាមរយៈ keyboard
    cout << "Height : "; // ការបង្ហាញអក្សរ Height : មកលើអេក្រង់
    cin >> height;       // បញ្ចូលតម្លៃឲ្យ height តាមរយៈ keyboard
    cout << "Weight : "; // ការបង្ហាញអក្សរ Weight : មកលើអេក្រង់
    cin >> weight;       // បញ្ចូលតម្លៃឲ្យ weight តាមរយៈ keyboard
}
void Student::display()
{
    cout << name << setw(5) << age << setw(10) << sex
         << setw(5) << height << setw(5) << weight << endl;
}
void main()
{
    Student obj;    // ការបង្កើត object នៃ Student ឈ្មោះ obj
    fstream myfile; // ការបង្កើត object នៃ fstream ឈ្មោះ myfile
    char fname[10]; // ការប្រកាសអញ្ញាត fname ជា array ប្រភេទ char ចំនួន 10តួអក្សរ
    cout << "Enter a file name to be stored :\n";

    cin >> fname; // បញ្ចូលតម្លៃឲ្យ fname តាមរយៈ keyboard
    myfile.open(fname, ios::in || ios::out);

    // reading from the keyboard
    obj.getdata(); // ការហៅអនុគមន៍ getdata() មកប្រើតាមរយៈ obj នៃ Student class

    // storing onto the file
    myfile.open(fname, ios::out); // ការបើក file មួយតាមរយៈ fname
    cout << "Storing on the file ... \n";
    myfile.write((char *)&obj, sizeof(obj));
    myfile.close(); // ការបិទ myfile

    // reading from the file
    myfile.open(fname, ios::in); // ការបើក file មួយតាមរយៈ fname
    cout << "Reading from the file ...\n";
    myfile.read((char *)&obj, sizeof(obj));
    obj.display();  // ការហៅអនុគមន៍ display() មកប្រើតាមរយៈ obj នៃ Student class
    myfile.close(); // ការបិទ myfile
}