#include <iostream>
#include <string>
using namespace std;
 
int 
main () 
{
    string firstName = "John";
    string lastName = "Doe";

    // Concatenation
    string fullName = firstName + " " + lastName;
    cout << fullName << endl;

    fullName = firstName.append(lastName);
    cout << fullName << endl;

    // Length
    cout << "length is " << fullName.length() << endl;
    cout << "size is " << fullName.size() << endl;

    // Access String
    cout << "2nd letter is " << fullName[1] << endl;

    // Change Character
    fullName[4] = 'R';
    cout << fullName << endl;

    return 0;
}
