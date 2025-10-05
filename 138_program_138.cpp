#include <iostream>
using namespace std;

int main() {
    int a, b, c, largest;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
Determine the largest of three numbers using nested if-else
    if (a >= b) {
        if (a >= c) {
            largest = a;
        } else {
            largest = c;
        }
    } else {
        if (b >= c) {
            largest = b;
        } else {
            largest = c;
        }
    }

    cout << "The largest number is: " << largest << endl;
    return 0;
}
