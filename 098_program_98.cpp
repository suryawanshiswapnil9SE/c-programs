#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    double num, sum = 0.0;

    cout << "Enter the count of numbers: ";
    cin >> n;
Calculate the average of N numbers
    cout << "Enter " << n << " numbers: " << endl;
    while (count < n) {
        cin >> num;
        sum += num;
        count++;
    }

    if (n > 0) {
        cout << "Average = " << sum / n << endl;
    } else {
        cout << "No numbers entered." << endl;
    }
    return 0;
}
