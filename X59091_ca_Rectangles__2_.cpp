#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,m;
    bool f = 1;
    while (cin >> n >> m) {
        if (f) f = false;
        else cout << endl;
        int cont = 9;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << cont;
                --cont;
                if (cont < 0) cont = 9;
            }
            cout << endl;
        }
    }
}
