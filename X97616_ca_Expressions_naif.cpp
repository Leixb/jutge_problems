#include <bits/stdc++.h>
using namespace std;

int main () {
    string a, b;
    cin >> a;

    int cont = 0;

    bool first = true;

    while (cin >> b) {
        if (b == a) ++cont;
        else {
            if (!first) cout << " + ";
            first = false;

            cout << a;
            if (cont) cout << '*' << cont + 1;
            cont = 0;
        }
        a = b;
    }
    if (!first) cout << " + ";
    first = false;
    cout << a;
    if (cont) cout << '*' << cont + 1;
    cout << endl;
}
