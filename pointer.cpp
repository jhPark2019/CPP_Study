#include <iostream>
#include <string>
using namespace std;

int
main()
{
    string food = "Pizza";
    string* ptr = &food; // can save address data

    cout << food << "\n";
    cout << &food << "\n";
    cout << ptr << "\n";
    cout << *ptr << "\n"; // dereferncing

    *ptr = "Ramyon";

    cout << food << "\n";
    cout << &food << "\n";
    cout << ptr << "\n";
    cout << *ptr << "\n"; // dereferncing
    
    return 0;
}