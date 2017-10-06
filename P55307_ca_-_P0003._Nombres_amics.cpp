#include <bits/stdc++.h>
using namespace std;

int main () {
    int a,b;
    bool first = true;
    while (cin >> a >> b) {
        int a_t = 1, b_t = 1;
        for (int i = 2; i < a; ++i) if (a%i==0) a_t+=i;
        for (int i = 2; i < b; ++i) if (b%i==0) b_t+=i;
        if (a!=b and a_t==b and b_t == a) {
            if (!first) cout << ',';
            else first=false;
            cout << '(' << a << ' ' << b << ')';
        }
    }
    cout << endl;
}
