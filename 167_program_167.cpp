#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int counter = 1;
    cout << "Increasing Number Square Pattern:" << endl;
Pattern: Square of increasing numbers (1 2 3, 4 5 6, 7 8 9)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << counter++ << " ";
        }
        cout << endl;
    }
    return 0;
}
