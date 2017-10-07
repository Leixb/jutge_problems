#include <bits/stdc++.h>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu producte(const Matriu& a, const Matriu& b) {
    size_t p = a.size(), q = b[0].size(), r = b.size();
    Matriu prod (p, vector <int> (q,0));
    for (size_t i=0; i < p; ++i)
        for (size_t j=0; j < q; ++j)
            for (size_t k = 0; k < r; ++k)
                prod[i][j]+=a[i][k]*b[k][j];
    return prod;
}


int main () { }
