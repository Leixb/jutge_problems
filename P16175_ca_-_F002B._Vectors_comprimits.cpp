#include <bits/stdc++.h>
using namespace std;

struct Parell {
    int valor;                           // Diferent de zero
    int pos;                             // Més gran o igual que zero
};

typedef vector<Parell> Vec_Com;          // Ordenat per pos!

Vec_Com suma(const Vec_Com& v1, const Vec_Com& v2) {
    size_t j = 0;
    Vec_Com res;
    for (size_t i = 0; i < v1.size(); ++i) {
        while (j < v2.size() and v2[j].pos < v1[i].pos) res.push_back(v2[j++]);
        if (j < v2.size() and v1[i].pos == v2[j].pos) {
            Parell p;
            p.pos = v1[i].pos;
            p.valor = v1[i].valor + v2[j].valor;
            if (p.valor) res.push_back(p);
            j++;
        } else res.push_back(v1[i]);
    }
    for (; j < v2.size(); ++j) res.push_back(v2[j]);
    return res;
}

void llegeix(Vec_Com& v) {
    int n;
    cin >> n;
    v = Vec_Com(n);
    char shit;
    for (int i = 0; i < n; ++i) cin >> v[i].valor >> shit >> v[i].pos;
}

int main () {
    int n;
    cin >> n;

    while (n--) {
        Vec_Com v1, v2;
        llegeix(v1);
        llegeix(v2);
        Vec_Com res = suma(v1,v2);
        cout << res.size();
        for (size_t i = 0; i < res.size(); ++i) cout << ' ' << res[i].valor << ';' << res[i].pos;
        cout << endl;
    }
}
