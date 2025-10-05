#include <iostream>
using namespace std;

int main() {
    double cost, selling, profit_loss;
    cout << "Enter cost price: $";
    cin >> cost;
    cout << "Enter selling price: $";
    cin >> selling;

    profit_loss = selling - cost;
Calculate simple profit or loss percentage
    if (profit_loss > 0) {
        double profit_percent = (profit_loss / cost) * 100;
        cout << "Profit: $" << profit_loss << " (" << profit_percent << "%)" << endl;
    } else if (profit_loss < 0) {
        double loss_percent = (abs(profit_loss) / cost) * 100;
        cout << "Loss: $" << abs(profit_loss) << " (" << loss_percent << "%)" << endl;
    } else {
        cout << "No Profit, No Loss." << endl;
    }
    return 0;
}
