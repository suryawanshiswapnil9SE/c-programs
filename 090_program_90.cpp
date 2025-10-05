#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter coordinates (x y): ";
    cin >> x >> y;
Determine the location of a point (x, y)
    if (x == 0 && y == 0) {
        cout << "The point is at the Origin." << endl;
    } else if (y == 0) {
        cout << "The point lies on the X-axis." << endl;
    } else if (x == 0) {
        cout << "The point lies on the Y-axis." << endl;
    } else {
        cout << "The point is in a Quadrant (not on axis)." << endl;
    }

    return 0;
}
