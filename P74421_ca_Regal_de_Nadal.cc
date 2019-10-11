#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;  // limit for array size
int n;  // array size
int t[2 * N];

void build() {  // build the tree
    for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
}

int query(int l, int r) {  // sum on interval [l, r)
    int res = 0;
    for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
        if (l&1) res += t[l++];
        if (r&1) res += t[--r];
    }
    return res;
}

int main () {
    for (int cont = 1; cin >> n; ++cont) {
        cout << '#' << cont << endl;
        for (int i = 0; i < n; ++i) cin >> t[n+i];
        build();
        int q;
        cin >> q;
        for (int i = 0; i < q; ++i) {
            int p, c;
            cin >> p >> c;
            if (p > c) swap(p, c);
            cout << query(p-1, c) << endl;
        }
    }
}
