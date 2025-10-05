#include <iostream>
using namespace std;

int main() {
    int start = 1, end = 100;
Print all prime numbers between 1 and 100
    cout << "Prime numbers between 1 and 100: ";
    for (int n = start; n <= end; n++) {
        if (n <= 1) continue;

        bool is_prime = true;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            cout << n << " ";
        }
    }
    cout << endl;
    return 0;
}
