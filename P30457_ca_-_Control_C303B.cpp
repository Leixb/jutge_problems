#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m;
    while (cin >> n >> m) {
        vector<vector<int> > v (n, vector<int> (m));
        for (int i=0; i < n; ++i)
            for (int j=0; j < m; ++j) cin >> v[i][j];
        int k;
        cin >> k;
        if (k%4 == 0) {
            for (int i=0; i < n; ++i) {
                for (int j=0; j < m; ++j) {
                    if (j != 0) cout << ' ';
                    cout << v[i][j];
                }
                cout << endl;
            }
        } else if (k%4 == 1) {
            for (int j=0; j < m; ++j) {
                for (int i=n-1; i >= 0; --i) {
                    if (i != n-1) cout << ' ';
                    cout << v[i][j];
                }
                cout << endl;
            }
        } else if (k%4 == 2) {
            for (int i=n-1; i >= 0; --i) {
                for (int j=m-1; j >= 0; --j) {
                    if (j != m-1) cout << ' ';
                    cout << v[i][j];
                }
                cout << endl;
            }
        } else {
            for (int j=m-1; j >= 0; --j) {
                for (int i=0; i < n; ++i) {
                    if (i != 0) cout << ' ';
                    cout << v[i][j];
                }
                cout << endl;
            }
        }
        cout << endl;
    }
}
