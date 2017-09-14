#include <iostream> 
#include <vector>
#include <queue>
using namespace std;

int n,m;

struct coord {
    int x,y;
    coord (int xx=0, int yy=0) : x(xx), y(yy) {}
} ini;

int main () {
    cin >> n >> m;
    vector <vector <char> > v (n, vector <char> (m));
    for (int i=0; i < n; i++)
        for (int j=0; j < m; j++) {
            cin >> v[i][j];
            if (v[i][j]=='C') ini = coord(i,j);
        }
    vector <vector <int> > d (n, vector <int> (m,-1));
    queue <pair <coord, int> > q;
    q.push({ini,0});
    int D = -1;
    while (!q.empty()) {
        coord p = q.front().first;
        int dd = q.front().second; q.pop();
        if (p.x >= n or p.y >= m or p.x < 0 or p.y < 0) continue;
        if (d[p.x][p.y]!=-1) continue;
        if (v[p.x][p.y]=='#') continue;
        d[p.x][p.y]=dd;
        if (v[p.x][p.y]=='X') {
            D = dd;
            break;
        }
        q.push({coord(p.x-2, p.y+1),dd+1});
        q.push({coord(p.x-2, p.y-1),dd+1});
        q.push({coord(p.x+2, p.y+1),dd+1});
        q.push({coord(p.x+2, p.y-1),dd+1});

        q.push({coord(p.x-1, p.y+2),dd+1});
        q.push({coord(p.x-1, p.y-2),dd+1});
        q.push({coord(p.x+1, p.y+2),dd+1});
        q.push({coord(p.x+1, p.y-2),dd+1});
    }
    cout << D << endl;
}
