#include <bits/stdc++.h>
using namespace std;

int main () {
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == "A____A" and b == "||[]||" and c == "||__||" and d == "~~~~~~") cout << "castell" << endl;
    else if (a == "----" and b == "[][]" and c == b and d == b) cout << "edifici" << endl;
    else cout << "no res" << endl;
}
