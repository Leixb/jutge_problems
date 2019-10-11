#include <bits/stdc++.h>
using namespace std;

bool match(const vector <vector <int> >& v, const size_t& x, const size_t& y, const int& dx, const int& dy, const int& prev=0, const bool& first=true) {
    if (x >= v.size() or y >= v[0].size()) return true;
    if (v[x][y] <= prev and !first) return false;
    return match(v,x+dx,y+dy,dx,dy,v[x][y], false);
}

int main () {
    int n,m;
    while (cin >> n >> m) {
        vector <vector <int> > v (n, vector <int> (m));
        for (int i=0; i < n; ++i) for (int j=0; j < m; ++j) cin >> v[i][j];
        int x,y;
        cin >> x >> y;
        bool ok = match(v,x,y,+1,+1) and match(v,x,y,-1,-1)
              and match(v,x,y,-1,+1) and match(v,x,y,+1,-1);
        cout << ((ok)? "si" : "no") << endl;
    }
}
