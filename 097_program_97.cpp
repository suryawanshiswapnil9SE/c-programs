#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a limit N: ";
    cin >> n;
Print all odd numbers up to N using a while loop
    cout << "Odd numbers up to " << n << ": ";
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i += 2;
    }
    cout << endl;
    return 0;
}
