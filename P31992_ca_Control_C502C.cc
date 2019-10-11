#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cout << "----------" << endl;
    while (cin >> n) {
        vector <string> v(n);
        vector <int> pes(n, 0);
        int mx = 0;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            for (size_t j = 0; j < v[i].size(); ++j) pes[i] += v[i][j]-'a';
            mx = max(pes[i], mx);
        }
        for (int i = 0; i < n; ++i) if (pes[i] < mx) cout << v[i] << endl;
        cout << "----------" << endl;
    }
}
