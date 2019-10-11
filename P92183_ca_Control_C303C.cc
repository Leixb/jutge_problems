#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    vector<string> v (n, string(m, '.'));
    for (int i = 0; i < n; ++i) v[i][0] = v[i][m-1] = '*';
    for (int i = 0; i < m; ++i) v[0][i] = v[n-1][i] = '*';

    char c = 'a';
    for (int dir = 0, x = 1, y = 1;; dir = (dir+1)%4, ++c) {
        if (c == 'z' + 1) c = 'A';
        v[x][y] = c;
        if (v[x][y+1] == '.') ++y;
        else if (v[x+1][y] == '.') ++x;
        else if (v[x][y-1] == '.') --y;
        else if (v[x-1][y] == '.') --x;
        else break;
    }
    for (int i=0; i < n; ++i) cout << v[i] << endl;
}
