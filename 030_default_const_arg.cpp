#include <iostream>
using namespace std;

float moneyrec(float money, float factor = 1.05) {
    return (money * factor) - money;
}
// float moneyrec(float money, const float factor = 1.05) {
//     return (money * factor) - money;
// }

int main() {
    int money;

    cout << "Enter your amount: ";
    cin >> money;

    cout << "You will receive " << moneyrec(money) << " TK profit" << endl;
    cout << "For VIP, you will receive " << moneyrec(money, 1.1) << " TK profit" << endl;

    return 0;
}
