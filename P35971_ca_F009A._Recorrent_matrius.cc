#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int> > Matriu;

int suma_linia(const Matriu& mat, int of, int oc, int df, int dc) {
    int suma = 0;

    if (of == df) {
        int step = (oc < dc)? +1 : -1;
        for (int i = oc; i != dc; i+=step) suma += mat[of][i + step];
    } else {
        int step = (of < df)? +1 : -1;
        for (int i = of; i != df; i+=step) suma += mat[i + step][oc];
    }

    return suma;
}

int main () {
    int n, m;
    cin >> n >> m;
    Matriu mat (n, vector <int> (m));
    for (int i=0; i < n; ++i) for (int j=0; j < m; ++j) cin >> mat[i][j];

    int f, c, suma=0;
    int prev_f, prev_c;
    cin >> prev_f >> prev_c;
    suma += mat[prev_f][prev_c];
    while (cin >> f >> c) {
        suma += suma_linia(mat, prev_f, prev_c, f, c);
        prev_f = f;
        prev_c = c;
    }
    cout << "suma = " << suma << endl;
}
