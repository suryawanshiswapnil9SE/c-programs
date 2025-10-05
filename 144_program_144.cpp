#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter any character: ";
    cin >> ch;
Check if a character is a printable ASCII character (usually 32 to 126)
    int ascii_val = (int)ch;
    if (ascii_val >= 32 && ascii_val <= 126) {
        cout << "'" << ch << "' is a Printable ASCII Character." << endl;
    } else {
        cout << "'" << ch << "' is a Control/Non-Printable Character." << endl;
    }
    return 0;
}
