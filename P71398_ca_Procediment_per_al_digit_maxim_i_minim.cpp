#include <bits/stdc++.h>
using namespace std;

void digit_maxim_i_minim(int n, int& maxim, int& minim) {
    if (n < 10) {
        maxim = n;
        minim = n;
        return;
    }
    digit_maxim_i_minim(n/10,maxim,minim);
    minim = min(n%10,minim);
    maxim = max(n%10,maxim);
}

int main () {
    int n, mx,mn;
    while (cin >> n) {
        digit_maxim_i_minim(n,mx,mn);
        cout << mx << ' ' << mn << endl;
    }
}
