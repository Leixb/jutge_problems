#include <bits/stdc++.h>
using namespace std;

string nat_a_cadena(int x, int n, int b) {
    string s = string(n, '#');
    s[n-1] = '0';
    for (int p = n-1; x > 0; --p, x/=b) {
        if (p < 0) return string(n, '*');

        s[p] = x%b;
        if (s[p] < 10) s[p] += '0';
        else s[p] += 'A' - 10;
    }
    return s;
}

int main() {
    int x, n, b;
    while (cin >> x >> n >> b) cout << nat_a_cadena(x, n, b) << endl;
}

