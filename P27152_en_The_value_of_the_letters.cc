#include <bits/stdc++.h>
using namespace std;

int main () {
    int cnt = 0;
    map <char,int> m;
    m['a'] = m['e'] = 1;
    m['o'] = m['s'] = 2;
    m['d'] = m['i'] = m['n'] = m['r'] = 3;
    m['c'] = m['l'] = m['t'] = m['u'] = 4;
    m['m'] = m['p'] = 5;
    m['b'] = m['f'] = m['g'] = m['h'] = m['j'] = m['q'] = m['v'] = m['x'] = m['y'] = m['z'] = 6;
    m['k'] = m['w'] = 7;
    char c;
    while (cin >> c) cnt += m[c];
    cout << cnt << endl;
}
