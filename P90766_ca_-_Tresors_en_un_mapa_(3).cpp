#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define pii pair <int,int> 

int main () {
    int n,m;
    cin >> n >> m;
    vector <vector <char> > v (n,vector <char> (m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> v[i][j];
    int c = 0;
    queue <pii> q;
    int x,y;
    cin >> x >> y;
    q.push({x-1,y-1});
#define px p.first
#define py p.second
    while (!q.empty()) {
        pii p = q.front(); q.pop();
        if (px >= n or py >= m or px < 0 or py < 0) continue;
        if (v[px][py]=='X') continue;
        if (v[px][py]=='t') c++;
        v[px][py]='X';
        q.push({px+1,py});
        q.push({px-1,py});
        q.push({px,py+1});
        q.push({px,py-1});
    }
    cout << c << endl;
}
