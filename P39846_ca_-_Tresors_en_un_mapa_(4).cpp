#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define pii pair<int,int>
#define pip pair<int,pii >

int main () {
    int n,m;
    cin >> n >> m;
    vector <vector <char> > v(n,vector <char> (m));
    for (int i = 0; i < n ; i++) 
        for (int j = 0; j < m; j++) cin >> v[i][j];
    int x,y;
    cin >> x >> y;
    queue <pip > q;
    q.push({0,{x-1,y-1}});
#define px p.first
#define py p.second
#define vp v[px][py]
    int mx=0;
    while (!q.empty()) {
        pii p = q.front().second;
        int d = q.front().first; q.pop();
        if (px>=n or py>=m or px<0 or py<0) continue;
        if (vp=='X') continue;
        if (vp=='t' and d > mx) mx=d;
        vp='X';
        q.push({d+1,{px+1,py}});
        q.push({d+1,{px-1,py}});
        q.push({d+1,{px,py+1}});
        q.push({d+1,{px,py-1}});
    }
    if (mx==0) cout << "no es pot arribar a cap tresor" << endl;
    else cout << "distancia maxima: " << mx << endl;
}
