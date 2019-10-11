#include <bits/stdc++.h>
using namespace std;

bool es_permutacio(const vector<int>& v, int n) {
    vector <bool> vists(n, false);
    for (int i = 0; i < n; ++i) {
        if (v[i] < 1 or v[i] > n) return false;
        if (vists[v[i]-1]) return false;
        vists[v[i]-1]=true;
    }
    for (int i = 0; i < n; ++i) if (not v[i]) return false;
    return true;
}

int main () {
    int n;
    while (cin >> n) {
        vector <int> v (n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        cout << es_permutacio(v, n) << endl;
    }
}
