#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout << "Right-Angled Triangle (Row Alphabet):" << endl;
Pattern: Right-angled triangle (A, B B, C C C, ...)
    for (int i = 1; i <= n; i++) {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}
