#include <bits/stdc++.h>
using namespace std;

template <typename T>
T abs (T n) { return (n < 0)? -n : n; }

int main () {
    vector <vector <bool> > taulell (11,vector <bool> (11,0));
    for (int i = 0; i < 10; ++i) {
        char y,d;
        int x,l;
        cin >> y >> x >> l >> d;
        if (d=='h') for (int j = x; j < x+l; ++j ) taulell[y-'a'+1][j] = true;
        else for (int j = y-'a'+1; j < y-'a'+1+l; ++j ) taulell[j][x] = true;
    }
    cout << "  12345678910" << endl;
    for (int i = 1; i < 11; ++i) {
        for (int j = 0; j < 11; ++j)
            if (j==0) cout << char('a'+i-1) << ' ';
            else cout << ((taulell[i][j])? 'X' : '.');
        cout << endl;
    }
    cout << endl;
    char Y;
    int x,y;
    while (cin >> Y >> x) {
        y = Y-'a'+1;
        if (taulell[y][x]) cout << Y << x << " tocat!" << endl;
        else {
            cout << Y << x << " aigua! vaixell mes proper a distancia ";
            vector <vector <bool> > visitat (11,vector <bool> (11,0));
            queue<pair <size_t, size_t> > q;
            q.push({y,x});
            size_t min_dist = 20;
            while (!q.empty()) {
                auto pos = q.front(); q.pop();
                if (pos.first >= taulell.size() or pos.second >= taulell[0].size()) continue;
                if (visitat[pos.first][pos.second]) continue;
                visitat[pos.first][pos.second] = true;
                if (taulell[pos.first][pos.second]) {
                    size_t dist = max(abs(y-int(pos.first)) , abs(x-int(pos.second)));
                    if (dist > min_dist) continue;
                    else min_dist = dist;
                }
                q.push({pos.first+1,pos.second});
                q.push({pos.first-1,pos.second});
                q.push({pos.first,pos.second+1});
                q.push({pos.first,pos.second-1});
            }
            cout << min_dist << endl;
        }
    }
}
