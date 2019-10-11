#include <bits/stdc++.h>
using namespace std;

typedef vector<int> VE;

struct Node {
    int valor;
    VE fill;
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

void postordre(int node, vector<Node>& v) {
    for (auto nod : v[node].fill) postordre(nod, v);
    cout << ' ' << v[node].valor;
}

int main() {
    int n;
    cin >> n;
    vector<Node> v(n);
    int j = 0;
    arbre(j, v);
    postordre(0,v);
    cout << endl;
}
