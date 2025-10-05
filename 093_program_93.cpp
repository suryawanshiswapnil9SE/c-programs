#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
Check voting eligibility
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not yet eligible to vote." << endl;
    }
    return 0;
}
