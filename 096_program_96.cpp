#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a limit N: ";
    cin >> n;
Print all even numbers up to N using a for loop
    cout << "Even numbers up to " << n << ": ";
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
