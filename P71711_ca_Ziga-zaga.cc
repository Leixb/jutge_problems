#include <bits/stdc++.h>
using namespace std;

int main () {
    int cnt=0, n, m;
    while (cin >> n >> m and ++cnt) {
        vector <vector<int> > v(n, vector<int> (m));
        for (int i=0; i < n; ++i) for (int j=0; j < m; ++j) cin >> v[i][j];

        int prev = v[0][0]-1;
        bool ok = true;
        for (int j=0; j < m and ok; ++j)
            if (j%2) for (int i=n-1; i >= 0 and ok; --i)
                if (prev < v[i][j]) prev = v[i][j];
                else ok = false;
            else for (int i=0; i < n and ok; ++i)
                if (prev < v[i][j]) prev = v[i][j];
                else ok = false;
        cout << "matriu " << cnt << ": " << ((ok)? "si" : "no") << endl;
    }
}
