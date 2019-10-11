#include <bits/stdc++.h>
using namespace std;

int main () {
    int k,n,m;
    cin >> k >> n >> m;
    string rect = "";
    int cont = 9;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            rect += cont + '0';
            --cont;
            if (cont < 0) cont = 9;
        }
        rect+='\n';
    }
    bool f = 1;
    while (k--) {
        if (f) f=0;
        else cout << endl;
        cout << rect;
    }
}
