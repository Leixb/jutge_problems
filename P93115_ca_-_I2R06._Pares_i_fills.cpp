#include <bits/stdc++.h>
using namespace std;

void input(int pare, set <pair <int,int> >& rel) {
    int dre, esq;
    if (cin >> esq)
        if (esq != -1) {
            cout << pare << ' ' << esq << endl;
            rel.insert({pare, esq});
            input(esq, rel);
        }
    if (cin >> dre)
        if (dre != -1) {
            cout << pare << ' ' << dre << endl;
            rel.insert({pare, dre});
            input(dre, rel);
        }
}

int main () {
    set <pair <int, int> > rel;
    int n;
    cin >> n;
    input(n, rel);
    cout << "-----" << endl;
    for (auto i : rel) cout << i.first << ' ' << i.second << endl;
}
