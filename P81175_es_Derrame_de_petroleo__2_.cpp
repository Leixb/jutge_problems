#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define pii pair<int,int>
#define pip pair<int,pii >

int main () {
    int n,m;
    cin >> n >> m;
    vector <vector <char> > dir (n,vector<char> (m));
    vector <vector <int> > v (n,vector<int> (m));
    vector <vector <int> > d (n,vector<int> (m,-1));
    priority_queue <pip, vector <pip >, greater<pip > > q;
    for (size_t i=0; i < v.size(); i++) {
        for (size_t j=0; j < v[i].size(); j++) {
            char c;
            cin >> c >> dir[i][j];
            if (c>='0' and c<='9') v[i][j]=c-'0';
            else {
                if (c=='X') q.push({0,{i,j}});
                v[i][j]=0;
            }
        }
    }
#define px p.first
#define py p.second
    while (!q.empty()) {
        pii p=q.top().second;
        int dd = q.top().first; q.pop();
        if (px >= n or py >= m or px < 0 or py < 0) continue;
        if (dir[px][py]=='#') continue;
        if (d[px][py]!=-1) continue;
        d[px][py]=dd;
        int vn = 10, vs = 10, ve=10,vw=10;
        if (dir[px][py] == 'N') {
            vn -= v[px][py];
            vs += v[px][py];
        } else if (dir[px][py] == 'S') {
            vs -= v[px][py];
            vn += v[px][py];
        } else if (dir[px][py] == 'E') {
            ve -= v[px][py];
            vw += v[px][py];
        } else if (dir[px][py] == 'W') {
            vw -= v[px][py];
            ve += v[px][py];
        }
        q.push({vn+dd,{px-1,py}});
        q.push({vs+dd,{px+1,py}});
        q.push({ve+dd,{px,py+1}});
        q.push({vw+dd,{px,py-1}});
    }
    int num;
    bool t = true;
    while (cin >> num) {
        if (!t) {for (int i = 0; i < m; i++) cout << '='; cout << endl;}
        else t = false;
        for (size_t i=0; i < dir.size(); i++) {
            for (size_t j=0; j < dir[i].size(); j++) {
                if (dir[i][j]=='#') cout << '#';
                else {
                    if (d[i][j]<=num and d[i][j]!=-1) cout << '*';
                    else cout << '.';
                }
            }
            cout << endl;
        }
    }
}
