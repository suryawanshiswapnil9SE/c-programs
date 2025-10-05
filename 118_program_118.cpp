#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout << "Right-Aligned Triangle (*):" << endl;
Pattern: Right-aligned half pyramid of *
    for (int i = 1; i <= n; i++) {
Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
Stars
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
