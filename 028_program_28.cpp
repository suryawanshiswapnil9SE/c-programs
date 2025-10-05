#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a < b)
        cout << "Smallest = " << a;
    else
        cout << "Smallest = " << b;
    return 0;
}
