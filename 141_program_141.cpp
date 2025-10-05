#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    cout << "Enter numerator and denominator: ";
    cin >> numerator >> denominator;
Simple division result check (prevent division by zero)
    if (denominator != 0) {
        double result = (double)numerator / denominator;
        cout << "Result of division: " << result << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
    return 0;
}
