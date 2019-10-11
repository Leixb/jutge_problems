#include <bits/stdc++.h>
using namespace std;

struct Racional {
    int num, den;
};

Racional minim(const Racional& a, const Racional& b) {
    if (a.num*b.den < b.num*a.den) return a;
    return b;
}

int main () {
    int n;
    cin >> n;
    vector <Racional> a(n);
    for (int i = 0; i < n; ++i) {
        char shit;
        cin >> a[i].num >> shit >> a[i].den;
    }
    for (int i = 0; i < n; ++i) {
        Racional r;
        char shit;
        cin >> r.num >> shit >> r.den;
        r = minim(a[i], r);
        cout << r.num << '/' << r.den << endl;
    }
}
