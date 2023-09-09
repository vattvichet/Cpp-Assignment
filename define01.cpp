#include <iostream>
using namespace std;

int main()
{

    // use define processor to create ថេរ (constant)
    //  Formula: #define ឈ្មោះថេរ តម្លៃថេរ

#define TRUE 1  // created ថេរ TRUE that the value is 1
#define FALSE 0 // created ថេរ FALSE that the value is 0
#define A8 "Copy right by A8!"

    cout << "True is " << TRUE << endl;
    cout << "False is " << FALSE << endl;
    cout << A8 << endl;

    // use define processor to create ម៉ាក្រូ (macro) that its duty has only 1 line

    // Formula : #define ឈ្មោះម៉ាក្រូ(parameter បើមាន)   កូដមួយបន្ទាត់ // single line function

#define abs(n) (n < 0 ? -n : n)
    cout << "Absolute of -5 is " << abs(-5) << endl;
    cout << "Absolute of 5 is " << abs(5) << endl;

    return 0;
}
