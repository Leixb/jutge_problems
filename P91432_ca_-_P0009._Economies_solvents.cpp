#include <bits/stdc++.h>
using namespace std;

int main () {
    bool ok=true, ok_der=true;
    int a, b, c;
    cin >> a >> b;
    ok &= b - a > 0;
    while (cin >> c and (ok or ok_der)) {
        ok &= c - b > 0;
        ok_der &= c - 2*b + a > 0;
        a = b;
        b = c;
    }
    cout << ((ok or ok_der)? "economia solvent" : "economia no solvent") << endl;
}

