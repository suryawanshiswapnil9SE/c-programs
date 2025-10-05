#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter point coordinates (x y): ";
    cin >> x >> y;
Determine the quadrant of a point (excluding axes for simplicity)
    if (x > 0 && y > 0) {
        cout << "The point is in Quadrant I." << endl;
    } else if (x < 0 && y > 0) {
        cout << "The point is in Quadrant II." << endl;
    } else if (x < 0 && y < 0) {
        cout << "The point is in Quadrant III." << endl;
    } else if (x > 0 && y < 0) {
        cout << "The point is in Quadrant IV." << endl;
    } else {
        cout << "The point is on an Axis or the Origin (not a quadrant)." << endl;
    }

    return 0;
}
