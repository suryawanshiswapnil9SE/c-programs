#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number N: ";
    cin >> n;
Print numbers from N down to 1 using a for loop
    cout << "Counting down from " << n << ": ";
    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
