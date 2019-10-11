#include <bits/stdc++.h>
using namespace std;

int pare(const vector<int>& pares, int vertex) {
    while(pares[vertex] != vertex)
        vertex = pares[vertex];
    return vertex;
}

int main () {
    for (int n, m; cin >> n >> m;) {
        vector<int> pares(n);
        for (int i = 0; i < n; ++i) pares[i] = i;

        bool bosc = true;
        int n_boscs = n;

        while (m--) {
            int a, b;
            cin >> a >> b;

            if (bosc) {
                const int pa = pare(pares, a), pb = pare(pares, b);

                if (pa == pb) bosc = false;
                else
                    pares[pa] = pares[a] = pb,
                    --n_boscs;
            }

        }

        if (bosc) cout << n_boscs << endl;
        else cout << "no" << endl;
    }
}
