#include <bits/stdc++.h>
using namespace std;

typedef vector< vector<char> > Matriu;

bool es_subparaula_diag(const string& s, const Matriu& a, int i, int j) {
    for (size_t p = 0; p < s.size(); ++p)
        if ( i + p >= a.size() or j + p >= a[0].size() or a[i+p][j+p]!=s[p]) return false;
    return true;
}

int main () {
    int m;
    cin >> m;
    while (m--) {
        string s;
        int n;
        cin >> s >> n;

        Matriu a(n, vector<char>(n));
        for (int i=0; i < n; ++i) for (int j=0; j < n; ++j) cin >> a[i][j];

        bool found = false;
        for (int i=0; i < n and !found; ++i)
            for (int j=0; j < n and !found; ++j)
                found = es_subparaula_diag(s,a,i,j);

        cout << boolalpha << found << endl;
    }
}
