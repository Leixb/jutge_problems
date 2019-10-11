#include <bits/stdc++.h>
using namespace std;

bool find(string s, const vector<string>& dict) {
    int L = 0, R = dict.size(), M;
    while (L <= R) {
        M = (L + R)/2;
        if (dict[M] == s) return true;
        if (dict[M] < s) L = M+1;
        else  R = M-1;
    }
    return false;
}

bool check(const vector<string>& taulell, const int& k) {
    for (int i=0; i < k; ++i)
        for (int j=i+1; j < k; ++j)
            if (taulell[i][j] != taulell[j][i]) return false;
    return true;
}

int main () {
    ios_base::sync_with_stdio(false);

    vector <string> taulell(100);

    int n;
    cin >> n;
    vector <string> dict(n);
    for (int i = 0; i < n; ++i) cin >> dict[i];

    for (int k; cin >> k and k;) {

        bool ok = true;
        for (int i = 0; i < k; ++i) {
            cin >> taulell[i];
            ok = ok and find(taulell[i], dict);
        }

        if (!ok) cout << "NO" << endl;
        else cout << (check(taulell, k)? "SI" : "NO") << endl;
    }
}
