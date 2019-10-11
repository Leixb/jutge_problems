#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,m;
    bool f = 1;
    while (cin >> n >> m) {
        if (f) f = false;
        else cout << endl;
        int mod = (n+m)%5;
        for (int i = 0; i < n; ++i) cout << string(m,mod+'0') << endl;
    }
}
