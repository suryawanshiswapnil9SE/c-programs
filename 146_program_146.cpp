#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
Determine if three numbers are in ascending order
    if (n1 <= n2 && n2 <= n3) {
        cout << "The numbers are in Ascending Order." << endl;
    } else {
        cout << "The numbers are not strictly in Ascending Order." << endl;
    }
    return 0;
}
