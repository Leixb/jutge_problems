#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m, f, c;
    cin >> n >> m >> f >> c;
    cout << '(' << f << ", " << c << ')' << endl;

    vector <vector <bool> > visitats (n, vector <bool> (m, false));
    visitats[f-1][c-1] = true;

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
        if (visitats[f-1][c-1]) {
            cout << "posicio repetida" << endl;
            return 0;
        }
        visitats[f-1][c-1] = true;
        cout << '(' << f << ", " << c << ')' << endl;
    }
}
