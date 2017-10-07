#include <bits/stdc++.h>
using namespace std;

int m,n;
vector <string> sopa;
vector <vector <bool> > maj;

#define coord pair <int,int>


bool match(const string& s, const coord& pos, const coord& des, size_t p=0) {
    if (p==s.size()) return true;
    if (pos.first >= m or pos.second >= n) return false;
    if (sopa[pos.first][pos.second] != s[p]) return false;
    bool ok = match(s,{pos.first+des.first, pos.second + des.second},des,p+1);
    if (ok) maj[pos.first][pos.second]=true;
    return ok;
}

template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << '[';
    for (size_t i = 0; i < v.size(); ++i) os << " "[i==0] << v[i];
    os << ']';
    return os;
}

int main () {
    int x;
    bool first = true;
    while (cin >> x >> m >> n) {
        if (first == false) cout << endl;
        else first = false;
        vector <string> noms (x); 
        sopa = vector <string> (m, string(n,' '));
        maj = vector <vector <bool> > (m, vector <bool> (n, 0));
        for (int i = 0; i < x; ++i) cin >> noms[i];
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j) cin >> sopa[i][j];
        cerr << noms << endl << sopa;
        for (int i=0; i < m; ++i) {
            for (int j=0; j < n; ++j) {
                for (size_t k = 0; k < noms.size(); ++k) {
                    match(noms[k],{i,j},{0,1});
                    match(noms[k],{i,j},{1,0});
                    match(noms[k],{i,j},{1,1});
                }
            }
        }
        for (int i=0; i < m; ++i) {
            for (int j=0; j < n; ++j) {
                if (j != 0) cout << ' ';
                cout << char(sopa[i][j] + (maj[i][j]*('A'-'a')));
            }
            cout << endl;
        }
    }
}
