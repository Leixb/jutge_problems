#include <bits/stdc++.h>
using namespace std;

int main () {
    for (int n; cin >> n;) {
        int a, b, current = 0, mx = 0;
        if (n) cin >> a;
        for (int i = 1; i < n and cin >> b; ++i, a = b)
            if (b > a) ++current;
            else {
                mx = max(mx, current);
                current = 0;
            }
        cout << max(current, mx) << endl;
    }
}
