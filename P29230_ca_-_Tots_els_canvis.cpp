#include <bits/stdc++.h>
using namespace std;

const int MONEDES[] = {50, 20, 10, 5, 2, 1};

void canvis (const int& n, int prev[51] = new int[51], int depth = 0) {
    if (n == 0) {
        for (int i = 0; i < depth; ++i) {
            if (i != 0) cout << ' ';
            cout << MONEDES[prev[i]];
        }
        cout << endl;
    } else
        for (int i = 0; i < 6; ++i) {
            const int moneda = MONEDES[i];
            if (n >= moneda and (depth == 0 or prev[depth-1] <= i)) {
                prev[depth] = i;
                canvis(n - moneda, prev, depth+1);
            }
        }
}

int main () {
    for (int n; cin >> n;) {
        canvis(n);
        cout << endl;
    }
}
