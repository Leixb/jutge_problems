#include <bits/stdc++.h>
using namespace std;

int main () {
    map <string, int> saldos;
    for (string x, y; cin >> x >> y;) {
        int n;
        cin >> n;
        saldos[x] -= n, saldos[y] += n;
    }

    for (const pair<string, int> &saldo : saldos)
        cout << saldo.first << ' ' << saldo.second << endl;

    vector <pair<string, int> > v (saldos.begin(), saldos.end());
    sort(v.begin(), v.end(),
            [](const pair<string, int> &a, const pair<string, int> &b) -> bool {
                if (a.second == b.second) return a.first < b.first;
                return a.second < b.second;
            }
            );
    cout << "--------------------" << endl;
    for (const pair<string, int> &saldo : v)
        cout << saldo.first << ' ' << saldo.second << endl;
}
