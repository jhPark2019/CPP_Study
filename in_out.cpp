#include <iostream>

using namespace std;

int
main() {
    int x, y;
    int sum;

    // cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)
    cout << "Type a number: ";
    // cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum << endl;
}