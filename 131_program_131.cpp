#include <iostream>
using namespace std;

int main() {
    double bill_amount;
    double discount = 0.0;
    cout << "Enter total bill amount: $";
    cin >> bill_amount;
Check bill amount for discount eligibility using a simple condition
    if (bill_amount > 1000) {
        discount = bill_amount * 0.10; // 10% discount
    }

    double final_amount = bill_amount - discount;
    cout << "Discount applied: $" << discount << endl;
    cout << "Final payable amount: $" << final_amount << endl;

    return 0;
}
