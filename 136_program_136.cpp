#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    ch = tolower(ch); // Convert to lowercase for simplified check
Check if a character is a vowel or consonant using switch
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "'" << ch << "' is a Vowel." << endl;
            break;
        default:
Check if it's an alphabet before concluding it's a consonant
            if (ch >= 'a' && ch <= 'z') {
                cout << "'" << ch << "' is a Consonant." << endl;
            } else {
                cout << "'" << ch << "' is not an Alphabet." << endl;
            }
            break;
    }
    return 0;
}
