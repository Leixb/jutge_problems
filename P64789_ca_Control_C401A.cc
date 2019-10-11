#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int> > Matriu;

int suma_diagonals(const Matriu& mat) {
    int suma = 0;
    for (size_t i = 0; i < mat.size(); ++i)
        suma += mat[i][i] + ((i != mat.size()-1-i)? mat[i][mat.size()-1-i] : 0);
    return suma;
}

int main () {
    int n;
    while (cin >> n) {
        Matriu mat (n, vector<int> (n));
        for (int i=0; i < n; ++i)
            for (int j=0; j < n; ++j) cin >> mat[i][j];
        cout << suma_diagonals(mat) << endl;
    }
}
