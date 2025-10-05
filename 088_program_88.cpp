#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;
Check if a triangle is valid (sum of two sides > third side)
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "The triangle is Valid." << endl;
    } else {
        cout << "The triangle is Not Valid." << endl;
    }
    return 0;
}
