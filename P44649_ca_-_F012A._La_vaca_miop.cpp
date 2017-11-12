#include <bits/stdc++.h>
using namespace std;

int main () {
    int m, s, u;
    cin >> m >> s >> u;
    vector <vector <char> > v (m, vector<char> (1, '|'));
    v[s][0]='=';
    bool done = false;
    for (int i = 0; i < m; ++i) v[i].push_back((i == u)? 'V' : '.' );
    for (int j = 0; not done; ++j)
        for (int i = 0; i < 1<<j and not done; ++i) {
            if (j%2) --u;
            else ++u;
            for (int i = 0; i < m; ++i) v[i].push_back((i == u)? 'V' : '.' );
            if (u == s) done = true;
        }
    for (int i = 0; i < m; ++i) {
        for (size_t j = 0; j < v[0].size(); ++j) cout << v[i][j];
        cout << endl;
    }
}
