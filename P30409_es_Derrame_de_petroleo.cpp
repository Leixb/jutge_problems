#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct coord {
    int x,y;
    coord (int xx=0, int yy=0): x(xx), y(yy) {}
};

int main () {
    int n,m;
    cin >> n >> m;
    vector <vector <char> > v (n, vector <char> (m));
    vector <vector <int> > d (n, vector <int> (m,-1));
    queue <pair <coord, int> > q;
    for (int i=0; i < v.size(); i++) {
        for (int j=0; j < v[i].size(); j++) {
            cin >> v[i][j];
            if (v[i][j]=='X') {
                q.push({coord(i,j),0});
                v[i][j]='.';
            }
        }
    }
    while (!q.empty()) {
        coord p = q.front().first; 
        int dd=q.front().second; q.pop();
        if (p.x >= n or p.y >= m or p.x <0 or p.y <0) continue;
        if (v[p.x][p.y]=='#') continue;
        if (d[p.x][p.y]!=-1) continue;
        d[p.x][p.y]=dd;
        q.push({coord(p.x+1,p.y),dd+1});
        q.push({coord(p.x-1,p.y),dd+1});
        q.push({coord(p.x,p.y+1),dd+1});
        q.push({coord(p.x,p.y-1),dd+1});
    }
    int p;
    bool f = true;
    while (cin >> p) {
        if (!f){
            for (int j = 0; j < m; j++) cout << '=';
            cout << endl;
        } else f=false;
        for (int i=0; i < v.size(); i++) {
            for (int j=0; j < v[i].size(); j++) {
                if (v[i][j]=='.') {
                    if (d[i][j]<=p and d[i][j]!=-1) cout << '*';
                    else cout << '.';
                } else cout << v[i][j];
            }
            cout << endl;
        }
    }
}
