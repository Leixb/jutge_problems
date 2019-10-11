#include <bits/stdc++.h>
using namespace std;

struct pos {
    int x, y;
};

int main () {
    for (int n, m; cin >> n >> m;) {
        vector<vector<char> > bosc (n, vector<char> (m));

        queue<pos> Q;

        for (int i=0; i < n; ++i)
            for (int j=0; j < m; ++j) {
                cin >> bosc[i][j];
                if (bosc[i][j] == 'F') Q.push({i, j});
            }

        while (!Q.empty()) {
            int x = Q.front().x, y = Q.front().y;
            Q.pop();
            if (bosc[x][y] == '.') continue;
            bosc[x][y] = '.';
            if (x + 1 < n) Q.push({x+1, y});
            if (x > 0) Q.push({x-1, y});
            if (y + 1 < m) Q.push({x, y+1});
            if (y > 0) Q.push({x, y-1});
        }

        for (int i=0; i < n; ++i) {
            for (int j=0; j < m; ++j) cout << bosc[i][j];
            cout << endl;
        }
        cout << endl;
    }
}
