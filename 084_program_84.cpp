#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
Check if a character is a digit (0-9)
    if (ch >= '0' && ch <= '9') {
        cout << "The character is a Digit." << endl;
    } else {
        cout << "The character is Not a digit." << endl;
    }

    return 0;
}
