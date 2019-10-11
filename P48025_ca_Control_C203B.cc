#include <bits/stdc++.h>
using namespace std;

inline bool acaba_en_quaranta_dos(const int& x) {
    return x%100 == 42;
}

int main () {
    int m = 0, n;
    while (cin >> n) {
        int cnt = 0;
        while (n--) {
            int x;
            cin >> x;
            cnt += acaba_en_quaranta_dos(x);
        }
        cout << '#' << ++m << ": " << cnt << endl;
    }
}
