#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout << "Right-Angled Triangle (0s and 1s):" << endl;
Pattern: Right-angled triangle of 0s and 1s (alternating)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
Check if the sum of indices is even or odd
            if ((i + j) % 2 == 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}
