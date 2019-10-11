#include <bits/stdc++.h>
using namespace std;

bool es_maco(int x) {

    for (const auto& div : {7, 3})
        while (x%div == 0) {
            x /= div;
            if (x%div) return false;
            x /= div;
        }

    return x == 1;
}

int main () {
    for (int n; cin >> n;) cout << n << (es_maco(n)? " es maco" : " es lleig") << endl;
}
