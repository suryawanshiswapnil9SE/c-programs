#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout << "Inverted Pyramid of (*):" << endl;
Pattern: Inverted Pyramid of *
    for (int i = n; i >= 1; i--) {
Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
Stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
