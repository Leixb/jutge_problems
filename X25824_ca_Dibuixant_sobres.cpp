#include <bits/stdc++.h>
using namespace std;

int main () {
    for (int n; cin >> n;) {
        n -= 2;
        cout << '+' << string(n, '-') << '+' << endl;
        for(int i = 0; i < n; ++i) {
            for (int j = -1; j <= n; ++j) {
                if (j == i) cout << '\\';
                else if (j == n-1-i) cout << '/';
                else cout << ((j == -1 or j == n)? '|' : ' ');
            }
            cout << endl;
        }
        cout << '+' << string(n, '-') << '+' << endl << endl;
    }
}
