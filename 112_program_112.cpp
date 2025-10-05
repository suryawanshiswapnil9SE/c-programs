#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout << "Hollow Square Pattern:" << endl;
Pattern: Hollow Square of *
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "* ";
            } else {
                cout << "  "; // Two spaces for alignment
            }
        }
        cout << endl;
    }
    return 0;
}
