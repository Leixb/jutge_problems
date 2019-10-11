#include <bits/stdc++.h>
using namespace std;

struct pos {
    int x, y;
    char c;
};

int main () {
    for (int n, m; cin >> n >> m;) {
        vector <vector<char> > tauler(n+2, vector<char>(m+2, '#'));
        queue <pos> q;
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= m; ++j) {
                cin >> tauler[i][j];
                if (tauler[i][j] > '.') {
                    q.push({i, j, tauler[i][j]});
                    tauler[i][j] = '.';
                }
            }


        while (!q.empty()) {
            const pos p = q.front();
            q.pop();

            if (tauler[p.x][p.y] != '.') continue;
            tauler[p.x][p.y] = p.c;

            q.push({p.x+1, p.y, p.c});
            q.push({p.x-1, p.y, p.c});
            q.push({p.x, p.y+1, p.c});
            q.push({p.x, p.y-1, p.c});
        }

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) cout << tauler[i][j];
            cout << endl;
        }
        cout << endl;
    }
}
