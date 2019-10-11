#include <bits/stdc++.h>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu producte(const Matriu& a, const Matriu& b) {
    int n = a.size();
    Matriu prod (n, vector <int> (n,0));
    for (int i=0; i < n; ++i)
        for (int j=0; j < n; ++j)
            for (int k = 0; k < n; ++k)
                prod[i][j]+=a[i][k]*b[k][j];
    return prod;
}

int main () { }
