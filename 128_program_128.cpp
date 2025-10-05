#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout << "Right-Aligned Hollow Triangle (*):" << endl;
Pattern: Right-aligned hollow triangle of *
    for (int i = 1; i <= n; i++) {
Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
Stars
        for (int k = 1; k <= i; k++) {
            if (k == 1 || k == i || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
