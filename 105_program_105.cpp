#include <iostream>
using namespace std;

int main() {
Print the cube of numbers from 1 to 10
    cout << "Number | Cube" << endl;
    cout << "------ | ----" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << "       | " << i * i * i << endl;
    }
    return 0;
}
