#include <bits/stdc++.h>
using namespace std;

string gira (string s) {
    string g = "";
    for (size_t i = 0; i < s.size(); ++i) g = s[i] + g;
    return g;
}

int main () {
    string a, b;
    while (cin >> a >> b)
        if (a == b or a == gira(b)) cout << "yes" << endl;
        else cout << "no" << endl;
}
