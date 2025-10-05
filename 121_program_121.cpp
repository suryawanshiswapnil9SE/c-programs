#include <iostream>
using namespace std;

int main() {
    int n = 4;
    cout << "Square with Row Numbers:" << endl;
Pattern: Square pattern with row numbers (1 1 1 1, 2 2 2 2, ...)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
