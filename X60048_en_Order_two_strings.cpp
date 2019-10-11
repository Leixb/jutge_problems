#include <bits/stdc++.h>
using namespace std;

int main () {
    for (string s, t; cin >> s >> t;)
        if (s > t) cout << t << ' ' << s << endl;
        else cout << s << ' ' << t << endl;
}
