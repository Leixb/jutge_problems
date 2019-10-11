#include <bits/stdc++.h>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    long a, b, c, A, B, C;
    cin >> a >> b >> c >> A >> B >> C;
    c *= -1, C *= -1;
    long det = a*B - b*A;
    if (det == 0) {
        if (B*c == b*C) cout << "La interseccio es una recta." << endl;
        else cout << "No hi ha interseccio." << endl;
    } else {
        cout << (double)(c*B - C*b)/det << ' '
             << (double)(a*C - A*c)/det << endl;
    }
}
