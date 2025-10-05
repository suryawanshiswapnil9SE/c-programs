#include <iostream>
using namespace std;

int main() {
    int n = 7;
    cout << "Multiplication Table of " << n << ":" << endl;
Print the multiplication table of 7
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
