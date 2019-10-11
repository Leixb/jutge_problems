#include <bits/stdc++.h>
using namespace std;

int aval() {
    char c;
    int tot=0, sgn=1;
    while (cin >> c) if (c != '.') {
        if (c=='-') sgn*=-1;
        else if (c>='0' and c <= '9') {
            int n = c - '0';
            while (cin >> c and c >= '0' and c <= '9') n = n*10 + c - '0';
            tot += n*sgn;
            if (c == '.') return tot;
            if (c == '-') sgn = -1;
            else sgn = 1;
        }
    } else return tot;
    throw 10;
}

int main () {
    try {
        for (;;) cout << aval() << endl;
    } catch(...) {}
}
