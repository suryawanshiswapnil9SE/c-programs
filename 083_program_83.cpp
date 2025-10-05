#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
Check if the character is an alphabet and its case
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch >= 'a' && ch <= 'z') {
            cout << "The character is a Lowercase alphabet." << endl;
        } else {
            cout << "The character is an Uppercase alphabet." << endl;
        }
    } else {
        cout << "The character is Not an alphabet." << endl;
    }

    return 0;
}
