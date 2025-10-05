#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;
    cout << "Enter three sides of a triangle: ";
    cin >> s1 >> s2 >> s3;
Check if a triangle is equilateral, isosceles, or scalene
    if (s1 == s2 && s2 == s3) {
        cout << "The triangle is Equilateral." << endl;
    } else if (s1 == s2 || s2 == s3 || s1 == s3) {
        cout << "The triangle is Isosceles." << endl;
    } else {
        cout << "The triangle is Scalene." << endl;
    }
    return 0;
}
