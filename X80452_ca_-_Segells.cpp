#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        int p,q;
        switch (n%7) {
            case 3: q = 6; break;
            case 6: q = 5; break;
            case 2: q = 4; break;
            case 5: q = 3; break;
            case 1: q = 2; break;
            case 4: q = 1; break;
            default: q = 0;
        }
        switch (n%4) {
            case 1: p = 3; break;
            case 2: p = 2; break;
            case 3: p = 1; break;
            default: p = 0;
        }
        if (q+(n-q*4)/7 < p + (n-p*7)/4) p = (n-q*4)/7;
        else q = (n-p*7)/4;
        cout << p << ' ' << q << endl;
    }
}
