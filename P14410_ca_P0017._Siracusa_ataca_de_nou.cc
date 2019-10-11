#include <bits/stdc++.h>
using namespace std;

void convergeix(int n, int& k, int& lluny) {
    if (n==1) return;
    ++k, lluny = max(lluny,n);
    if (n%2) convergeix(3*n+1,k,lluny);
    else convergeix(n/2,k,lluny);
}

int main () {
    int m,p,mx=1;
    cin >> m >> p;

    for (int n = 1; n <= m; ++n) {
        int k=0, lluny=0;
        convergeix(n,k,lluny);
        if (k >= p) cout << n << endl;
        mx = max(mx,lluny);
    }

    cout << "S'arriba a " << mx << '.' << endl;
}
