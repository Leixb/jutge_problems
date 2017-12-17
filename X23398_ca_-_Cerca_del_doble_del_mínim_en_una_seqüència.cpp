#include <bits/stdc++.h>
using namespace std;

int first_position_of(const vector<int> &v, int x) {
    size_t i;
    for (i = 0; i < v.size() and x != v[i]; ++i);
    return i;
}

int main () {
    for (int n; cin >> n;) {
        vector <int> v(n);
        cin >> v[0];
        int mn = v[0];
        for(int i = 1; i < n; ++i) {
            cin >> v[i];
            mn = min(v[i], mn);
        }
        cout << first_position_of(v, mn*2) << endl;
    }
}
