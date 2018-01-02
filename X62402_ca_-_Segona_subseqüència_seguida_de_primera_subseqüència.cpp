#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;

    vector <int> v(n);

    for (int i = 0; i < n; ++i) cin >> v[i];

    for (int i = n-k; i < n; ++i) cout << v[i] << ' ';
    for (int i = 0; i < n-k; ++i) {
        if (i) cout << ' ';
        cout << v[i];
    }
    cout << endl;
}
