#include <bits/stdc++.h>
using namespace std;

typedef vector< vector<int> > Matriu;

bool es_simetrica(const Matriu& m) {
    const size_t n = m.size();
    for (size_t i = 0; i < n; ++i)
        for (size_t j = i+1; j < n; ++j) if (m[i][j] != m[j][i]) return false;
    return true;
}

int main () {}
