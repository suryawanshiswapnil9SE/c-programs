#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;
    cout << "Enter operator (+, -): ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
Simple calculator using switch for two operations
    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        default:
            cout << "Error! Operator is not supported.";
    }
    return 0;
}
