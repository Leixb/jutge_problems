#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define pii pair <int,int>
#define pip pair <int,pii >

int main () {
    int n,m;
    cin >> n >> m;
    vector < vector <char> > v (n, vector <char> (m));
    for (int i=0; i < n; i++)
        for (int j=0; j < m; j++) cin >> v[i][j];
    int x,y;
    cin >> x >> y;
    queue <pip > q;
    q.push({0,{x-1,y-1}});
#define px p.first
#define py p.second
    int dd=-1;
    while (!q.empty()) {
        pii p = q.front().second;
        int d = q.front().first; q.pop();
        if (px>=n or py>=m or px < 0 or py < 0) continue;
        if (v[px][py]=='X') continue;
        if (v[px][py]=='t') { dd = d; break; }
        v[px][py]='X';
        q.push({d+1,{px+1,py}});
        q.push({d+1,{px-1,py}});
        q.push({d+1,{px,py+1}});
        q.push({d+1,{px,py-1}});
    }
    if (dd==-1) cout << "no es pot arribar a cap tresor" << endl;
    else cout << "distancia minima: " << dd << endl;

}
