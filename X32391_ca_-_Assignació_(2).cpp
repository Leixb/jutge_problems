#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    int d,n,t, cont = 0;
    cin >> d >> n >> t;
    while (t--) {
        int a;
        cin >> a;
        n += a - d;
        cont += (n>0);
    }
    cout << cont << endl;
}
