#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m, f, c;
    cin >> n >> m >> f >> c;
    cout << '(' << f << ", " << c << ')' << endl;

    string mov;
    while (cin >> mov) {
        if (mov == "dreta") ++c;
        else if (mov == "esquerra") --c;
        else if (mov == "amunt") --f;
        else if (mov == "avall") ++f;
        else {
            cout << "ordre incorrecta" << endl;
            return 0;
        }
        if (c > m or f > n or f < 1 or c < 1) {
            cout << "fora de limits" << endl;
            return 0;
        }
        cout << '(' << f << ", " << c << ')' << endl;
    }
}
