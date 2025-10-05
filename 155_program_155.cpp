#include <iostream>
using namespace std;

int main() {
Print ASCII values of numbers 0 through 9
    cout << "Digit | ASCII Value" << endl;
    cout << "------|------------" << endl;
    for (char c = '0'; c <= '9'; c++) {
        cout << c << "     | " << (int)c << endl;
    }
    return 0;
}
