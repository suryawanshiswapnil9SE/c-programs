#include <iostream>
using namespace std;

int main() {
    int a, b, max;
    cout << "Enter two numbers: ";
    cin >> a >> b;
Find the maximum of two numbers using the ternary operator
    max = (a > b) ? a : b;

    cout << "The maximum number is: " << max << endl;
    return 0;
}
