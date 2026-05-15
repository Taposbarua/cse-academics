#include <bits/stdc++.h>
using namespace std;

int main() {

    double amount, a, b, c;

    cin >> amount;

    a = (amount - 2000) * 0.08;
    b = ((amount - 3000) * 0.18 + 1000 * 0.08);
    c = ((amount - 4500) * 0.28 + 1500 * 0.18 + 1000 * 0.08);

    cout << fixed << setprecision(2);

    if (amount <= 2000.00) {
        cout << "Isento" << endl;
    }
    else if (amount > 2000.00 && amount <= 3000.00) {
        cout << "R$ " << a << endl;
    }
    else if (amount > 3000.00 && amount <= 4500.00) {
        cout << "R$ " << b << endl;
    }
    else {
        cout << "R$ " << c << endl;
    }

    return 0;
}