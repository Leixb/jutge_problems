#include <bits/stdc++.h>
using namespace std;

typedef vector<int> VE;

struct Node {
    int valor;
    VE fill;
    Node (int valor=0, VE v={}): valor(valor), fill(v) {}
};

// Llegeix un arbre i el desa a un tros del vector v començant a la posicio j.
// Modifica la variable j perque apunti a la seguent posicio lliure de v.
// Retorna la posicio dins de v de l’arrel del (sub)arbre llegit.
int arbre(int& j, vector<Node>& v) {
    int a = j;
    ++j;
    int f;
    cin >> v[a].valor >> f;
    v[a].fill = VE(f);
    for (int i = 0; i < f; ++i) v[a].fill[i] = arbre(j, v);
    return a;
}

int merge(size_t& p, size_t& p_a, size_t& p_b,  const vector<Node>& a, const vector<Node>& b, vector<Node>& res) {
    while (p >= res.size()) res.push_back(Node(0, {}));
    int pos = p;
    p++;
    size_t sz_a=0, sz_b=0;
    if (p_a < a.size()) {
        res[pos].valor+=a[p_a].valor;
        sz_a = a[p_a].fill.size();
    }
    if (p_b < b.size()) {
        res[pos].valor+=b[p_b].valor;
        sz_b = b[p_b].fill.size();
    }

    size_t j=0, k=0;

    while (j < sz_a or k < sz_b) {
        size_t fill_a = a.size(), fill_b = b.size();
        if (j < sz_a) fill_a = a[p_a].fill[j];
        if (k < sz_b) fill_b = b[p_b].fill[k];
        int val = merge(p,fill_a, fill_b, a, b, res);
        res[pos].fill.push_back(val);
        j++;
        k++;
    }

    return pos;
}

void preordre(int node, vector<Node>& v) {
    cout << ' ' << v[node].valor;
    for (auto nod : v[node].fill) preordre(nod, v);
}

int main () {
    int i=0, n;
    cin >> n;
    vector <Node> arbre_a (n);
    arbre(i, arbre_a);

    int j=0, m;
    cin >> m;
    vector <Node> arbre_b (m);
    arbre(j, arbre_b);

    vector <Node> res;
    size_t p= 0, p_a = 0, p_b = 0;
    merge(p, p_a, p_b, arbre_a, arbre_b, res);

    preordre(0, res);
    cout << endl;
}
