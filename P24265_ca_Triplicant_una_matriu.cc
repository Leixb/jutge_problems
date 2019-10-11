#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    for (int i=0; i < n; ++i) {
        for (int j=0; j < m; ++j) {
            if (j!=0) cout << ' ';
            int e;
            cin >> e;
            cout << e*3;
        }
        cout << endl;
    }
}
