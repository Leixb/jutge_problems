#include <bits/stdc++.h>
using namespace std;

void cruz (int px, int py, int sz, vector<vector<char> >& v) {
    if (sz == 1) {
        v[px][py+1] = v[px+2][py+1] = '|';
        v[px+1][py] = v[px+1][py+2] = '-';
        v[px+1][py+1] = 'O';
    } else {
        --sz;
        int jump = pow(3, sz);
        cruz(px, py+jump, sz, v);
        cruz(px+jump*2, py+jump, sz, v);
        cruz(px+jump, py, sz, v);
        cruz(px+jump, py+jump*2, sz, v);
        cruz(px+jump, py+jump, sz, v);
    }
}

int main () {
    int n;
    cin >> n;
    int sz = pow(3, n);
    vector <vector <char> > v (sz, vector <char> (sz, ' '));
    cruz(0,0,n,v);
    for (int i=0; i < sz; ++i) {
        cout << '|';
        for (int j=0; j < sz; ++j)
            cout << v[i][j];
        cout << '|' << endl;
    }
}
