#include <bits/stdc++.h>
using namespace std;

int main () {
    for (int n; cin >> n;) {
        cout << n << " = ";
        int cnt = 2;
        bool fst = true;
        while (n > 1) {
            if (n % cnt == 0) {
                if (fst) cout << cnt, fst = false;
                else cout << '*' << cnt;
                n /= cnt;
            } else ++cnt;
        }
        cout << endl;
    }
}
