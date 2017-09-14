#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define pii pair <int,int>

int main () {
    int n,m;
    while (cin >> n >> m) {
        vector <vector <char> > v (n,vector <char> (m));
        queue <pii > qk;
        queue <pii > qb;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) {
                cin >> v[i][j];
                if (v[i][j]=='K') qk.push({i,j});
                if (v[i][j]=='B') qb.push({i,j});
            }
#define px p.first
#define py p.second
#define vp v[px][py]
        int c=0;
        while (!qk.empty()) {
            pii p = qk.front(); qk.pop();
            if (px >= n or py >= m or px < 0 or py < 0) continue;
            if (vp=='k' or vp=='T') continue;
            if (vp>='0' and vp<='9') c+=vp-'0';
            vp='k';
            qk.push({px+2, py-1});
            qk.push({px+2, py+1});
            qk.push({px+1, py-2});
            qk.push({px+1, py+2});
            qk.push({px-2, py-1});
            qk.push({px-2, py+1});
            qk.push({px-1, py-2});
            qk.push({px-1, py+2});
        }
        while (!qb.empty()) {
            pii p = qb.front(); qb.pop();
            if (px >= n or py >= m or px < 0 or py < 0) continue;
            if (vp=='b' or vp=='T') continue;
            if (vp>='0' and vp<='9') c+=vp-'0';
            vp='b';
            qb.push({px+1, py-1});
            qb.push({px+1, py+1});
            qb.push({px-1, py-1});
            qb.push({px-1, py+1});
        }
        cout << c << endl;
    }
}
