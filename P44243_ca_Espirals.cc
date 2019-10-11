#include <bits/stdc++.h>
using namespace std;

template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << '[';
    for (size_t i = 0; i < v.size(); ++i) os << " "[i==0] << v[i];
    os << ']';
    return os;
}

int main () {
    int n;
    while (cin >> n and n) {
        vector <vector <bool> > v (n, vector <bool> (n,0));
        size_t lx=0, mx=n, ly=0, my=n, dir = 0;
        while (lx < mx and ly < my) {
            if (dir == 0) {
                for (size_t i = lx; i < mx; ++i) v[my-1][i]=true;
                lx+=2;
                if (lx == 2) lx = 1;
            } else if (dir == 1) {
                for (size_t i = ly; i < my; ++i) v[i][mx-1]=true;
                my-=2;
            } else if (dir == 2) {
                for (size_t i = lx; i < mx; ++i) v[ly][i]=true;
                mx-=2;
            } else {
                for (size_t i = ly; i < my; ++i) v[i][lx]=true;
                ly+=2;
            }
            dir = (dir+1)%4;
        }
        for (int i=0; i < n; ++i) {
            for (int j=0; j < n; ++j) cout << ((v[i][j])? 'X' : '.');
            cout << endl;
        }
        cout << endl;
    }
}
