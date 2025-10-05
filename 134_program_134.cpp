#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides (a, b, c): ";
    cin >> a >> b >> c;
Check if the triangle is a right-angled triangle using Pythagorean theorem ($a^2 + b^2 = c^2$)
    if ((a * a + b * b == c * c) || 
        (a * a + c * c == b * b) || 
        (b * b + c * c == a * a)) {
        cout << "It is a Right-Angled Triangle." << endl;
    } else {
        cout << "It is not a Right-Angled Triangle." << endl;
    }

    return 0;
}
