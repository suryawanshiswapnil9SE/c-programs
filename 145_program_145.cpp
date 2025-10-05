#include <iostream>
using namespace std;

int main() {
    int distance;
    double fare;
    cout << "Enter distance traveled (km): ";
    cin >> distance;
Simple fare calculation based on distance tiers
    if (distance <= 10) {
        fare = distance * 5.0; // $5 per km
    } else if (distance <= 50) {
        fare = 10 * 5.0 + (distance - 10) * 3.5; // $3.5 per km after 10 km
    } else {
        fare = 10 * 5.0 + 40 * 3.5 + (distance - 50) * 2.0; // $2 per km after 50 km
    }

    if (distance > 0) {
        cout << "Total fare: $" << fare << endl;
    } else {
        cout << "Distance must be positive." << endl;
    }
    return 0;
}
