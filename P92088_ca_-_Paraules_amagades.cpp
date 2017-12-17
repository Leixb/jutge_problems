#include <bits/stdc++.h>
using namespace std;

struct coord {
    int x, y;
};

int main () {
    for (int n, m; cin >> n >> m;) {
        char c;
        coord first = {-1, -1}, last;
        for (int i=0; i < n; ++i) {
            for (int j=0; j < m; ++j) {
                cin >> c;
                if (c >= 'A' and c <= 'Z') {
                    if (first.x == -1) first = last = {1+i, 1+j};
                    else last = {1+i, 1+j};
                }
            }
        }
        if (first.x == -1) cout << "no hi ha cap paraula" << endl;
        else if (first.x == last.x and first.y == last.y)
            cout << "la paraula comenca i acaba a (" << first.x << ", " << first.y << ')' << endl;
        else {
            if (first.y > last.y) swap(first, last);
            cout << "la paraula comenca a (" << first.x << ", " << first.y << ") i acaba a (" << last.x << ", " << last.y << ')' << endl;
        }
    }
}
