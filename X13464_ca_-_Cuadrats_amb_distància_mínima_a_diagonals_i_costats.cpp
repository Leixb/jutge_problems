#include <bits/stdc++.h>
using namespace std;


int dist(int x1, int y1, int x2, int y2) {
    return abs(x1-x2) + abs(y1-y2);
}

int main () {
    bool fst = true;
    for (int n; cin >> n;) {
        if (!fst) cout << endl;
        else fst = false;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int mn = min(
                        min(abs(i-j), abs(n-1-i-j)),
                        min(min(i, j),
                        min(n-1-i, n-1-j))
                        );
                cout << mn%10;
            }
            cout << endl;
        }
    }
}
