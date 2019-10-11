#include <bits/stdc++.h>
using namespace std;

int main () {
    for (int n; cin >> n;) {
        vector<int> v(n);

        for (int i = 0; i < n; ++i) cin >> v[i];

        int x;
        cin >> x;

        bool first = true;

        for (int i = 0; i < n; ++i)
            if ((x and v[i]%x == 0) or (v[i] == 0)) {
                if (!first) cout << ' ';
                else first = false;
                cout << v[i];
            }
        cout << endl;
    }
}
