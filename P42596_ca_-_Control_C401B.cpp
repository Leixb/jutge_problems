#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int> > Matriu;

void min_max(const Matriu& mat, int& minim, int& maxim) {
    minim=maxim=mat[0][0];
    for (size_t i=0; i < mat.size(); ++i)
        for (size_t j=0; j < mat[i].size(); ++j)
            minim = min(minim,mat[i][j]),
            maxim = max(maxim,mat[i][j]);
}

int main () {
    int n,m, first=1, mx=0, cnt=0;
    while (cin >> n >> m and ++cnt) {
        Matriu mat (n, vector<int> (m));
        for (int i=0; i < n; ++i)
            for (int j=0; j < m; ++j) cin >> mat[i][j];
        int max,min;
        min_max(mat,min,max);
        if (max-min > mx) mx = max-min, first = cnt;
    }
    cout << "la diferencia maxima es " << mx << endl
         << "la primera matriu amb aquesta diferencia es la " << first << endl;
}
