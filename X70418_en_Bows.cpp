#include <bits/stdc++.h>
using namespace std;

int main () {
    bool f = true;
    for (int n; cin >> n;) {
        if (!f) cout << endl;
        f = false;
        for (int i = 0; i < n; ++i)
            cout << string(i, ' ') << string(2*(n-i)-1, 'X') << endl;
        for (int i = n-2; i >= 0; --i)
            cout << string(i, ' ') << string(2*(n-i)-1, 'X') << endl;
    }
}
