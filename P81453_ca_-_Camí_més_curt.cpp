#include <bits/stdc++.h>
using namespace std;

void undo_path(const vector<int>& prev, const int& p) {
    if (p == 0) cout << 0;
    else {
        undo_path(prev, prev[p]);
        cout << ' ' << p;
    }
}

int main () {
    for (int n, m; cin >> n >> m;) {
        vector <set<int> > graf(n);
        for (int i = 0; i < m; ++i) {
            int x, y;
            cin >> x >> y;
            graf[x].insert(y);
        }
        queue <int> Q;
        Q.push(0);
        vector <int> prev (n, -1);
        while (Q.front() != n-1) {
            int pos = Q.front();
            Q.pop();
            for (const auto& y : graf[pos]) {
                if (prev[y] == -1) {
                    Q.push(y);
                    prev[y] = pos;
                }
            }
        }
        undo_path(prev, n-1);
        cout << endl;
    }
}
