#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter numerical score (0-100): ";
    cin >> score;
Simple score grading using ladder structure
    if (score < 0 || score > 100) {
        cout << "Invalid Score." << endl;
    } else if (score >= 90) {
        cout << "Grade: A (Excellent)" << endl;
    } else if (score >= 75) {
        cout << "Grade: B (Good)" << endl;
    } else if (score >= 60) {
        cout << "Grade: C (Satisfactory)" << endl;
    } else {
        cout << "Grade: Fail" << endl;
    }
    return 0;
}
