#include <bits/stdc++.h>
using namespace std;

vector <vector <size_t> > G;
vector <int> pre, low;

vector <pair <int, int> > bridges;

int cnt;

void dfs(size_t v, size_t p) {
    low[v]=pre[v]=cnt++;
    for (size_t i = 0; i < G[v].size(); ++i) {
        size_t w = G[v][i];
        if (pre[w]==-1) {
            dfs(w,v);
            low[v] = min(low[v],low[w]);
            if (low[w]==pre[w]) (v>w)? bridges.push_back({w,v}) : bridges.push_back({v,w});
        } else if (w!=p) low[v]=min(low[v],low[w]);
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    int n,m;
    while (cin >> n >> m) {
        G = vector <vector <size_t> > (n);
        pre = low =  vector <int> (n,-1);
        cnt = 0;
        bridges = vector <pair<int,int> >();
        while (m--) {
            size_t x,y;
            cin >> x >> y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        for (int i = 0; i < n; i++)
            if (pre[i] == -1) dfs(i, i);
        sort( bridges.begin(), bridges.end() );
        cout << bridges.size() << endl;
        bool b = true;
        for (auto& i : bridges) {
            if (b) b=false;
            else cout << "  ";
            cout << i.first << ' ' << i.second;
        }
        cout << endl << "----------" << endl;
    }
}

