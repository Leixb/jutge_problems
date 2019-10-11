#include <bits/stdc++.h>
using namespace std;

int avalua(const vector<int>& p, int x) {
    int tot = 0;
    for (int i = p.size()-1; i >= 0; --i) {
        tot += p[i];
        if (i > 0) tot*=x;
    }
    return tot;
}

int main () {}
