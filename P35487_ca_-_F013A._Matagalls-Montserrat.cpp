#include <bits/stdc++.h>
using namespace std;

struct Info {
    string nom, hora;
};

string busca(string nom, const vector<Info>& v) {
    int L = 0, R = v.size()-1;
    while (L <= R) {
        int M = (L+R)/2;
        if (v[M].nom == nom) {
            if (M+1 < v.size() and v[M+1].nom == v[M].nom) return "???";
            if (M-1 > 0 and v[M-1].nom == v[M].nom) return "???";
            return v[M].hora;
        } else if (v[M].nom < nom) L = M+1;
        else R = M-1;
    }
    return "ABANDONA";
}

int main () {
    int n;
    cin >> n;
    vector<Info> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i].nom >> v[i].hora;
    string dni, nom;
    while (cin >> dni >> nom) cout << dni << ' ' << busca(nom, v) << endl;
}
