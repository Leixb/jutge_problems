#include <bits/stdc++.h>
using namespace std;

int posicio(string s, const vector<string>& v) {
    int L = 0, R = v.size()-1;
    while (L <= R) {
        int M = (L + R)/2;
        if (v[M] == s) return M;
        if (v[M] < s) L = M+1;
        else  R = M-1;
    }
    return L;
}

int main () {
    int n;
    cin >> n;
    vector <string> v;
    while (n--) {
        string s;
        cin >> s;
        int p = posicio(s, v);
        v.insert(v.begin()+p, s);
    }
    for (size_t i = 0; i < v.size(); ++i) {
        if (i != 0) cout << ',';
        cout << v[i];
    }
    cout << endl;
}
