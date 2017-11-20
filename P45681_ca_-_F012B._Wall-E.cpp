#include <bits/stdc++.h>
using namespace std;

int main () {
    for (int cas = 1, f, c; cin >> f >> c; ++cas) {
        vector <vector <char> > v (f, vector<char> (c));
        for (int i=0; i < f; ++i)
            for (int j=0; j < c; ++j) cin >> v[i][j];
        int x, y;
        string direccions;
        cin >> x >> y >> direccions;

        int sum = 0;
        for (const auto& dir : direccions) {
            int dx=0, dy=0;
            if (dir == 'N') dx = -1;
            else if (dir == 'S') dx = +1;
            else if (dir == 'E') dy = +1;
            else dy = -1;
            while (v[x+dx][y+dy] != 'X') {
                x += dx, y += dy;
                if (v[x][y] != '.') {
                    sum += v[x][y] - '0';
                    v[x][y] = '.';
                }
            }
        }

        cout << "Cas " << cas << ": " << sum << endl;
    }
}
