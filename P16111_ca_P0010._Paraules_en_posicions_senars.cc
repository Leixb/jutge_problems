#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    stack <string> S;
    bool senar = 0;
    while (cin >> s and s != ".") {
        senar ^= 1;
        if (senar) S.push(s);
    }
    while (! S.empty()) {
        cout << S.top() << endl;
        S.pop();
    }
}
