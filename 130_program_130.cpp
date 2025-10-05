#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout << "Simple Alternating Number Pattern:" << endl;
Pattern: 1, 2 1, 2 1 2, ... (Alternating 1 and 2)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 != 0) {
                cout << "1 ";
            } else {
                cout << "2 ";
            }
        }
        cout << endl;
    }
    return 0;
}
