#include <iostream>
using namespace std;

int main() {
    int rows = 4, cols = 6;
    cout << "Hollow Rectangle using Numbers:" << endl;
Pattern: Hollow rectangle using numbers (1-1-1-1-1-1, 2- - - - 2, ...)
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << j << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
