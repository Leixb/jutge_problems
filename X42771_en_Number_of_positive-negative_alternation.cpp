#include <bits/stdc++.h>
using namespace std;

int main () {
    for (int n; cin >> n;) {
        int prev, a, cont=0;
        cin >> prev;
        for (int i = 1; i < n; ++i) {
            cin >> a;
            cont += (prev < 0) ^ (a < 0);
            prev = a;
        }
        cout << cont << endl;
    }
}
