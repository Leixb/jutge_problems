#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <string> v(n), res;
    for (int i = 0; i < n; ++i) cin >> v[i];
    while (v.size()) {
        int mn_pos = 0;
        for (size_t i = 0; i < v.size(); ++i)
            if (v[i] < v[mn_pos]) mn_pos = i;
        res.push_back(v[mn_pos]);
        v.erase(v.begin()+mn_pos);
    }
    for (int i = 0; i < n; ++i) {
        if (i != 0) cout << ',';
        cout << res[i];
    }
    cout << endl;
}
