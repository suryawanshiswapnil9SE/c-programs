#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter student score (0-100): ";
    cin >> score;
Check if a student passed (score >= 40) or failed
    if (score >= 40) {
        cout << "Result: Passed" << endl;
    } else {
        cout << "Result: Failed" << endl;
    }
    return 0;
}
