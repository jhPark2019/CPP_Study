#include <iostream>
#include <string>
using namespace std;

int 
main() 
{
    string fullName;
    string firstName;

    // can get only the first word (space is considered as a terminating char)
    // cout << "Type your full name: ";
    // cin >> firstName; // get user input from the keyboard
    // cout << "Your name is: " << firstName << endl;

    // can get full string
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName << endl;
    return 0;
}