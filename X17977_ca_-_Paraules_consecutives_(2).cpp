#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, cont=0;
    cin >> a >> b;

    bool fa = false;
    for (string s; cin >> s;) {
        if (s.length()%b == 0 and fa) ++cont;
        fa = s.length()%a == 0;
    }
    cout << cont << endl;
}
