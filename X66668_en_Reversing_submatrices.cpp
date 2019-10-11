#include <bits/stdc++.h>
using namespace std;

void central_reverse(vector<vector<char> >& v, const int& i1, const int& j1, const int& i2, const int& j2) {
    for (int i = i1; i <= i2; ++i) {
        for (int j = 0; j <= (j2 - j1)/2; ++j) swap(v[i][j1 + j], v[i][j2 - j]);
    }
    for (int j = j1; j <= j2; ++j) {
        for (int i = 0; i <= (i2 - i1)/2; ++i) swap(v[i1 + i][j], v[i2 - i][j]);
    }
}

void print(const vector<vector<char> >& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        for (size_t j = 0; j < v[i].size(); ++j) cout << v[i][j];
        cout << endl;
    }
    cout << endl;
}

int main () {
    int n, m;
    cin >> n >> m;
    vector<vector<char> > v(n, vector<char> (m));

    for (int i=0; i < n; ++i)
        for (int j=0; j < m; ++j) cin >> v[i][j];

    int i1, j1, i2, j2;
    while (cin >> i1 >>  j1 >>  i2 >>  j2) {
        central_reverse(v, i1, j1, i2, j2);
        print(v);
    }
}
