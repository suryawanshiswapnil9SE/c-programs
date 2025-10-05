#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int count = 1;
    cout << "Simple Number Sequence Pattern:" << endl;
Pattern: 1, 2 3, 4 5 6, ...
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count++ << " ";
        }
        cout << endl;
    }
    return 0;
}
