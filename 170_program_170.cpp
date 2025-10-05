#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a limit N: ";
    cin >> n;
Print numbers divisible by 3 AND 5 up to N
    cout << "Numbers divisible by 3 and 5 up to " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
