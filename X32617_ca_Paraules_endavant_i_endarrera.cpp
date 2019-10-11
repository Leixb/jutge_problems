#include <bits/stdc++.h>
using namespace std;

int main () {
    for (string mode; cin >> mode;) {
        string a, b;
        if (mode == "forth") cin >> a >> b;
        else cin >> b >> a;

        int n, cont=0;
        cin >> n;

        bool prev = false;
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            if (s == a) prev = true;
            else if (prev) {
                cont += (s == b);
                prev = false;
            }
        }
        cout << cont << endl;
    }
}
