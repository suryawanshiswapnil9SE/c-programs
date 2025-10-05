#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a limit N: ";
    cin >> n;
Print all perfect squares up to N
    cout << "Perfect squares up to " << n << ": ";
    int i = 1;
    while (i * i <= n) {
        cout << i * i << " ";
        i++;
    }
    cout << endl;
    return 0;
}
