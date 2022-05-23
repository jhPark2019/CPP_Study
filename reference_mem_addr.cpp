#include <iostream>
#include <string>
using namespace std;

int
main()
{
    string food = "Pizza";
    string &meal = food; // meal & food variable use same memory address

    cout << food << "\n";
    cout << meal << "\n";

    meal = "Ramyon";

    cout << food << "\n";
    cout << meal << "\n";

    cout << "food : " << &food << "\n";
    cout << "meal : " << &meal << "\n";

    return 0;
}