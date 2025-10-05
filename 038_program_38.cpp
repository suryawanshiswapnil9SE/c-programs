#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 1, next;
    cout << "Fibonacci: ";
    for (int i = 1; i <= 10; i++) {
        cout << n1 << " ";
        next = n1 + n2;
        n1 = n2;
        n2 = next;
    }
    return 0;
}
