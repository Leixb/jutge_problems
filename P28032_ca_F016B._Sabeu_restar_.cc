#include <bits/stdc++.h>
using namespace std;

string resta(string x, string y) {
    bool carry = 0;
    const int mida = x.length();

    string res = string(mida, '0');

    for (int i = mida-1; i >= 0; --i) {
        int a = x[i] - '0', b = y[i] - '0' + carry;
        if (a < b) carry = 1, a+=10;
        else carry = 0;
        res[i] += a - b;
    }

    return res;
}

int main() {
    string x, y;
    while (cin >> x >> y) cout << resta(x, y) << endl;
}
