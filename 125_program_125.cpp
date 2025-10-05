#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout << "Right-Angled Triangle (Decreasing Numbers):" << endl;
Pattern: Right-angled triangle (5, 5 4, 5 4 3, ...)
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > n - i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
