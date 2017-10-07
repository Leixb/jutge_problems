#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        int mx=0, cnt=0, m;
        map <int,int> M;
        while (n-- and cin >> m)
            if (++M[m] > cnt or (M[m] == cnt and m > mx)) mx = m, cnt = M[m];
        cout << mx << endl;
    }
}
