#include <bits/stdc++.h>
using namespace std;

int main () {
    cout.flags(ios_base::fixed);
    cout.precision(5);
    int calculs;
    cin >> calculs;
    while (calculs--) {

        double a;
        cin >> a;

        bool error = false;
        char op;
        while (cin >> op and op != '=') {
            double b;
            cin >> b;

            if (op == '+') a += b;
            else if (op == '-') a -= b;
            else if (op == '*') a *= b;
            else if (b != 0) a /= b;
            else error = true;

        }
        if (error) cout << "ERROR" << endl;
        else cout << a << endl;
    }
}
