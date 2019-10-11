#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main () {
    int n,m;
    cin >> n >> m;
    vector <vector <char> > v (n,vector<char>(m));
    for (size_t i=0; i < v.size(); i++)
        for (size_t j=0; j < v[i].size(); j++)
            cin >> v[i][j];
    queue < pair <int,int> > q;
#define px p.first
#define py p.second
    int x,y;
    cin >> x >> y;
    q.push({x-1,y-1});
    bool t = false;
    while (!q.empty()) {
        pair <int,int> p = q.front(); q.pop();
        if (px>=n or py>=m or px < 0 or py < 0) continue;
        if (v[px][py]=='X') continue;
        if (v[px][py]=='t') {t=true; break;}
        v[px][py]='X';
        q.push({px+1,py});
        q.push({px-1,py});
        q.push({px,py+1});
        q.push({px,py-1});
    }
    if (t) cout << "yes" << endl;
    else cout << "no" << endl;
}
