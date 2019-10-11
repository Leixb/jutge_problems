#include <bits/stdc++.h>
using namespace std;

string suma(string x, string y) {
    string z = string(x.size()+1, '0');
    int carry = 0;
    for (size_t i = 0; i < x.size(); ++i) {
        int res = x[x.size()-1-i] - '0' + carry;
        if (i < y.size()) res += y[y.size()-1-i]-'0';
        z[z.size()-1-i] = res%10 + '0';
        carry = res/10;
    }
    z[0] = '0' + carry;
    return z;
}

int main() {
    string x, y;
    while (cin >> x >> y) cout << suma(x, y) << endl;
}
