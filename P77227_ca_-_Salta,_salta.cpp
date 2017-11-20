#include <bits/stdc++.h>
using namespace std;

string sortida(int p, vector<int>& v) {
    const int mida = v.size();
    while (v[p]) {
        const int salt = v[p];
        v[p] = 0;
        p += salt;
        if (p >= mida) return "dreta";
        if (p < 0) return "esquerra";
    }
    return "mai";
}

int main () {}
