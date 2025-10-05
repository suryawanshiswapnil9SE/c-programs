#include <iostream>
using namespace std;

int main() {
    int num, i = 2;
    bool is_prime = true;
    cout << "Enter a number: ";
    cin >> num;
Check if a number is prime using a loop
    if (num <= 1) {
        is_prime = false;
    } else {
        do {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
            i++;
        } while (i * i <= num);
    }

    if (is_prime) {
        cout << num << " is a Prime number." << endl;
    } else {
        cout << num << " is Not a Prime number." << endl;
    }
    return 0;
}
