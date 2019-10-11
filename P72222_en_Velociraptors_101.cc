#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct coord {
    int x,y;
    coord(int xx, int yy) : x(xx), y(yy){}
};

int main () {
    int R,C;
    bool f = true;
    while (cin >> R >> C) {
        if (!f) cout << "---" << endl;
        else f=false;
        vector <vector <char> > v (R, vector <char> (C));
        vector <vector <int> > d (R, vector <int> (C,-1));
        int mx = 0;
        queue <pair <coord, int> > q;
        for (int i=0; i < v.size(); i++) {
            for (int j=0; j < v[i].size(); j++) {
                cin >> v[i][j];
                if (v[i][j]=='V') q.push({coord(i,j),0});
            }
        }
#define px p.x
#define py p.y
        while (!q.empty()) {
            coord p = q.front().first;
            int dd = q.front().second; q.pop();
            if (px>=R or py>=C or px < 0 or py <0 ) continue;
            if (d[px][py]!=-1) continue;
            if (v[px][py]=='#') continue;
            d[px][py]=dd;
            if (dd>mx) mx = dd;
            q.push({coord(px+1,py),dd+1});
            q.push({coord(px-1,py),dd+1});
            q.push({coord(px,py+1),dd+1});
            q.push({coord(px,py-1),dd+1});
        }
        for (int i=0; i < v.size(); i++) {
            for (int j=0; j < v[i].size(); j++) {
                if (d[i][j]==mx) cout << 'X';
                else cout << v[i][j];
            }
            cout << endl;
        }
    }

}
