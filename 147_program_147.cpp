#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter applicant's age: ";
    cin >> age;
Check eligibility for a job (age between 18 and 30, inclusive)
    if (age >= 18 && age <= 30) {
        cout << "Applicant is ELIGIBLE for the job." << endl;
    } else if (age < 18) {
        cout << "Applicant is NOT ELIGIBLE (Too young)." << endl;
    } else {
        cout << "Applicant is NOT ELIGIBLE (Too old)." << endl;
    }
    return 0;
}
