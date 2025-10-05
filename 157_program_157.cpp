#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum_of_cubes = 0;
    cout << "Enter a limit N: ";
    cin >> n;
Calculate the sum of cubes of first N natural numbers ($1^3 + 2^3 + ... + N^3$)
    for (int i = 1; i <= n; i++) {
        sum_of_cubes += (long long)i * i * i;
    }

    cout << "Sum of cubes = " << sum_of_cubes << endl;
    return 0;
}
