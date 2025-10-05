#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
Check if a person is a senior citizen
    if (age < 0) {
        cout << "Invalid Age." << endl;
    } else if (age >= 60) {
        cout << "Senior Citizen." << endl;
    } else {
        cout << "Not a Senior Citizen." << endl;
    }
    return 0;
}
