#include <iostream>
using namespace std;

int main() {
    int n = 4;
    cout << "Simple Half-Diamond Pattern (*):" << endl;
Pattern: Half-diamond (first half only)
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = (i <= n) ? i : 2 * n - i;
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
