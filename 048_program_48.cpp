#include <iostream>
using namespace std;

int main() {
    for (int n = 1; n <= 10; n++) {
        cout << "Table of " << n << endl;
        for (int i = 1; i <= 10; i++) {
            cout << n << " x " << i << " = " << n * i << endl;
        }
        cout << endl;
    }
    return 0;
}
