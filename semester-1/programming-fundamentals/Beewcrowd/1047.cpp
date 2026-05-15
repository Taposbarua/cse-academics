#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if (y < b) {
        y += 60;
        x -= 1;
        y -= b;

        if (x < a) {
            x += 24;
            x -= a;
        }
        else {
            x -= a;
        }

        cout << "O JOGO DUROU "
             << x << " HORA(S) E "
             << y << " MINUTO(S)" << endl;
    }
    else if (x == a && y == b) {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
    else if (y > b) {

        y -= b;

        if (x < a) {
            x += 24;
            x -= a;
        }
        else {
            x -= a;
        }

        cout << "O JOGO DUROU "
             << x << " HORA(S) E "
             << y << " MINUTO(S)" << endl;
    }

    return 0;
}