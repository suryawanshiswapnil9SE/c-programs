#include <iostream>
using namespace std;
int main() {
int num;
cout << "Enter an integer: ";
cin >> num;
// Check if the number is positive, negative, or zero
if (num > 0) {
cout << "The number is Positive." << endl;
} else if (num < 0) {
cout << "The number is Negative." << endl;
} else {
cout << "The number is Zero." << endl;
}
return 0;
}
