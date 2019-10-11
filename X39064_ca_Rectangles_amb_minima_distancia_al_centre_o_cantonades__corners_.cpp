#include <bits/stdc++.h>
using namespace std;

int dist(int x1, int y1, int x2, int y2) {
    return abs(x1-x2) + abs(y1-y2);
}

int main () {
    bool fst = true;
    for (int n, m; cin >> n >> m;) {
        if (!fst) cout << endl;
        else fst = false;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int mn = min(
                        dist(i, j, n/2, m/2),
                        min(
                            min(dist(i, j, 0, 0), dist(i, j, n-1, m-1)),
                            min(dist(i, j, n-1, 0), dist(i, j, 0, m-1))
                        ));
                cout << mn%10;
            }
            cout << endl;
        }
    }
}
