#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        vector <int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        for (int i = 0; i <= n/2; ++i) {
            if (i == n/2 and n%2==0) break;
            if (i!=0) cout << ' ';
            cout << v[i];
            if (i != n-i-1) cout << ' '<< v[n-i-1];
        }
        cout << endl;
    }
}
