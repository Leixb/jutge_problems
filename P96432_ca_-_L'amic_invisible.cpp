#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;

        unordered_map<string, int> saldo;

        while (m--) {
            string a, b;
            int cost;
            cin >> a >> b >> cost;
            saldo[a] -= cost;
            saldo[b] += cost;
        }

        set<pair<int, string> > S;

        for (const auto& amic : saldo) S.insert({amic.second, amic.first});
        for (const auto& amic : S) cout << amic.second << ' ' << amic.first << endl;

        cout << endl;
    }
}
