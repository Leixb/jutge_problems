#include <bits/stdc++.h>
using namespace std;

bool unimodal(const vector<int>& v) {
    if (v.size() <= 2) return false;

    size_t i;
    for (i = 1; i < v.size() and v[i] >= v[i-1]; ++i);

    if (i == 1 or i == v.size()) return false;

    if (v[i-1] == v[i-2] or v[i] == v[i-1]) return false;

    for (; i < v.size() and v[i] <= v[i-1]; ++i);

    return i == v.size();
}

int main () {
    for (int n; cin >> n;) {
        vector<int> v (n);

        for(int i = 0; i < n; ++i) cin >> v[i];

        if (unimodal(v)) {
            for (int i = 0; i < n; ++i) {
                if (i) cout << ' ';
                cout << v[i];
            }
            cout << endl;
            return 0;
        }
    }
    cout << "none" << endl;
}
