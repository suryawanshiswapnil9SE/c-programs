#include <iostream>
using namespace std;

int main() {
    int rows = 4, cols = 8;
    cout << "Border of a Rectangle Pattern:" << endl;
Pattern: Hollow Rectangle border of *
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
