#include <bits/stdc++.h>
using namespace std;

vector <int> diferencia_simetrica(const vector<int>& a, const vector<int>& b) {
    vector <int> diff;

    size_t pa=0, pb=0;

    while (pa < a.size() and pb < b.size()) {
        if (a[pa] < b[pb]) diff.push_back(a[pa++]);
        else if (a[pa] > b[pb]) diff.push_back(b[pb++]);
        else ++pa, ++pb;
    }

    while (pa < a.size()) diff.push_back(a[pa++]);
    while (pb < b.size()) diff.push_back(b[pb++]);

    return diff;
}

int main () {
    for (int m; cin >> m;) {
        vector <int> a(m);
        for (auto &i : a) cin >> i;


        int n;
        cin >> n;
        vector<int> b(n);
        for (auto &i : b) cin >> i;

        cout << diferencia_simetrica(a, b).size() << endl;
    }
}
