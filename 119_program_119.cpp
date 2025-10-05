#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout << "Right-Angled Triangle (Incremental Alphabet):" << endl;
Pattern: Right-angled triangle (A, A B, A B C, ...)
    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return 0;
}
