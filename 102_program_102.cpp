#include <iostream>
using namespace std;

int main() {
    int n, i = 2;
    bool is_prime = true;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        is_prime = false;
    } else {
Check if a number is prime using a while loop
        while (i * i <= n) {
            if (n % i == 0) {
                is_prime = false;
                break;
            }
            i++;
        }
    }

    if (is_prime) {
        cout << n << " is a Prime number." << endl;
    } else {
        cout << n << " is Not a Prime number." << endl;
    }
    return 0;
}
