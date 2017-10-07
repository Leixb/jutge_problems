#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m;
    while (cin >> n >> m) {
        int cont = 0;
        vector <vector <int> > v (n, vector <int> (m));
        vector <vector <bool> > visitat (n, vector <bool> (m, false));
        for (int i=0; i < n; ++i) for (int j=0; j < m; ++j) cin >> v[i][j];
        for (int i=0; i < n; ++i) {
            for (int j=0; j < m; ++j) {
                if (visitat[i][j] or v[i][j]==0) continue;
                ++cont;
                for (int k = i; k < n and v[k][j] != 0; ++k)
                    for (int l = j; l < m and v[k][l] != 0; ++l) 
                        visitat[k][l]=true;
            }
        }
        cout << cont << endl;
    }
}
