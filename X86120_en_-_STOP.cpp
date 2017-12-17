#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    for (int c = 1; cin >> s; ++c)
        if (s == "STOP") {
            cout << c-1 << endl;
            c = 0;
        }
}
