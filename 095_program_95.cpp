#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two non-zero numbers (a, b): ";
    cin >> a >> b;
Determine the sign of the product (positive or negative)
    if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
        cout << "The product will be Positive." << endl;
    } else {
        cout << "The product will be Negative." << endl;
    }

    return 0;
}
