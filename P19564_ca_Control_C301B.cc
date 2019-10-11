#include <bits/stdc++.h>
using namespace std;

int valencia(int n) {
    int a=0, b=0;
    for (bool p = true; n > 0; p^=1, n/=10)
        if (p) a+=n%10;
        else b+=n%10;
    return (b > a)? b - a : a - b;
}

int main () {
    int mx = -1;
    int n;
    while (cin >> n) {
        int val = valencia(n);
        if (val == 0) {
            cout << "El primer nombre equilibrat es " << n  << '.' << endl;
            return 0;
        }
        if (mx < val) mx = val;
    }
    cout << "La valencia maxima es " << mx << '.' << endl;
}
