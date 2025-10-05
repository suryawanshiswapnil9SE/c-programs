#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout << "Right-Angled Triangle (Row Numbers):" << endl;
Pattern: Right-angled triangle (1, 2 2, 3 3 3, ...)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
