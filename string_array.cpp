#include <iostream>
#include <string>
using namespace std;

int 
main() {

    /* string arrays */
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    cout << cars[0] << "\n";

    for (int i = 0; i < 4; i++) {
        cout << i << ": " << cars[i] << "\n";
    }

    /* array size */
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength << "\n";

    /* multi-dimensional array */
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
        cout << letters[i][j] << "\n";
        }
    }

  return 0;
}
