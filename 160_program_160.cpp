#include <iostream>
using namespace std;

int main() {
    int a, b;
    long long sum_odd = 0;
    cout << "Enter two limits (A B): ";
    cin >> a >> b;
Calculate the sum of odd numbers between two limits (A and B inclusive)
    int start = (a < b) ? a : b;
    int end = (a > b) ? a : b;

    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum_odd += i;
        }
    }

    cout << "Sum of odd numbers between " << a << " and " << b << " is: " << sum_odd << endl;
    return 0;
}
