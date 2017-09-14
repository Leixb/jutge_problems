#include <iostream>
#include <vector>
using namespace std;

int n,m;
vector <vector <char> > v; 
vector <vector <int> > d; 

int back (int x = 0, int y = 0) {
    if (x >= n or y >= m) return 0;
    if (x==n-1 and y == m-1) return 1;
    if (d[x][y]!=-1) return d[x][y];
    if (v[x][y]=='X') d[x][y]=0;
    else d[x][y]=back(x+1,y) + back(x,y+1);
    if (d[x][y]>=1e6) throw 0;
    return d[x][y];
}

int main () {
    while (cin >> n >> m and n!=0 and m!=0) {
        d.clear();
        v.clear();
        v.resize(n,vector <char> (m));
        d.resize(n,vector <int> (m,-1));
        for (int i = 0; i < n; i++) 
            for (int j = 0; j < m; j++) cin >> v[i][j];
        try {
            cout << back() << endl;
        } catch (...) {
            cout << "!!!" << endl;
        }
    }
}
