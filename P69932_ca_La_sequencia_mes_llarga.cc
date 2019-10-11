#include <bits/stdc++.h>
using namespace std;

int main () {
    for (string linea; getline(cin, linea);) {
        istringstream ss (linea);
        set <int> S;
        for (int n; ss >> n;) S.insert(n);

        if (S.empty()) {
            cout << 0 << endl;
            continue;
        }

        int cnt = 1, prev = *S.begin()%2;

        for (auto it = ++S.begin(); it != S.end(); ++it) {
            cnt += prev^(*it%2);

            prev = *it%2;

        }

        cout << cnt << endl;
    }
}
