#include <iostream>
using namespace std;

int main() {
    int n, term = 2;
    cout << "Enter number of terms N: ";
    cin >> n;
Print first N terms of a simple geometric progression (2, 4, 8, 16...)
    cout << "Geometric progression (base 2): ";
    for (int i = 0; i < n; i++) {
        cout << term << " ";
        term *= 2;
    }
    cout << endl;
    return 0;
}
