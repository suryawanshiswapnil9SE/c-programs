#include <iostream>
using namespace std;

int main() {
    int n, reversed = 0, remainder;
    cout << "Enter a number: ";
    cin >> n;
Print the reverse of a number
    int temp = n;
    do {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    } while (temp != 0);

    cout << "Reversed number is: " << reversed << endl;
    return 0;
}
