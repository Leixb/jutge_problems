#include <bits/stdc++.h>
using namespace std;

int m, n;
vector <string> sopa;

#define coord pair <int,int>

struct Info {
    string par;
    int num; // comptador d’aparicions

    bool operator<(const Info& p) {
        if (num == p.num) return (par < p.par);
        return (num > p.num);
    }
};

bool match(const string& s, const int& x, const int& y, const coord& des, size_t p=0) {
    if (p==s.size()) return true;
    if (x >= m or y >= n) return false;
    if (sopa[x][y] != s[p]) return false;
    return match(s,x+des.first, y + des.second,des,p+1);
}

int main () {
    int x;
    while (cin >> x) {
        vector <Info> noms (x); 
        for (int i = 0; i < x; ++i) cin >> noms[i].par;
        cin >> m >> n;
        sopa = vector <string> (m, string(n,' '));
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j) cin >> sopa[i][j];

        for (int i=0; i < m; ++i) {
            for (int j=0; j < n; ++j) {
                for (size_t k = 0; k < noms.size(); ++k) {
                    noms[k].num += match(noms[k].par,i,j,{0,1});
                    noms[k].num += match(noms[k].par,i,j,{1,0});
                }
            }
        }

        sort(noms.begin(), noms.end());

        for (const auto& i : noms) cout << i.num << ' ' << i.par << endl;
    }
}
