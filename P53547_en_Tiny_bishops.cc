#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int cas = 1; cas <= t; ++cas) {
        int n, m;
        cin >> n >> m;

        vector<vector<int> > tauler(n+2, vector<int> (m+2, -1));

        queue<pair<int, int> > q;

        string s;
        for (int i=1; i <= n; ++i) {
            for (int j=1; j <= m; ++j) {
                cin >> s;
                if (s != "X") {
                    tauler[i][j] = stoi(s);
                    q.push({i,j});
                }
            }
        }

        int prev = -1;
        bool ok = true;

        while (!q.empty() and ok) {
            pair<int, int> p = q.front();
            q.pop();
            if (tauler[p.first][p.second] == -1) continue;

            queue<pair<int, int> > grup;
            grup.push(p);

            int sum = 0, caselles = 0;

            while (!grup.empty()) {
                pair<int, int> pos = grup.front();
                grup.pop();

                if (tauler[pos.first][pos.second] == -1) continue;

                sum += tauler[pos.first][pos.second];
                ++caselles;

                tauler[pos.first][pos.second] = -1;

                grup.emplace(pos.first+1, pos.second+1);
                grup.emplace(pos.first+1, pos.second-1);
                grup.emplace(pos.first-1, pos.second+1);
                grup.emplace(pos.first-1, pos.second-1);
            }

            if (sum % caselles) ok = false;
            else if (prev != -1) {
                if (sum/caselles != prev) ok = false;
            } else prev = sum/caselles;
        }

        cout << "Case " << cas << ": " << (ok? "yes" : "no") << endl;

    }
}
