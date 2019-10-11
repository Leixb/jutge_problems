#include <bits/stdc++.h>
using namespace std;

void bf(const vector<int>& v, const size_t i, const int pos, const int& m) {
    if (pos > m/2 or pos < -m/2) return;

    if (i == v.size()) cout << pos << endl;
    else {
        bf(v, i+1, pos + v[i], m);
        bf(v, i+1, pos - v[i], m);
    }
}

int main () {
    int m, n;
    cin >> m >> n;
    vector <int> v (n);

    for (int i = 0; i < n; ++i) cin >> v[i];

    bf(v, 0, 0, m);
}
