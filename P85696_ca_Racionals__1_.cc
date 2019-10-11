#include <bits/stdc++.h>
using namespace std;

template <typename T>
T gcd (T a, T b) { return (b==0)? a : gcd(b,a%b); }

struct Racional {
    int num, den;
};

Racional racional(int n, int d) {
    Racional res;
    if (d < 0) n*=-1, d*=-1;
    if (n==0) {
        res.num = 0;
        res.den = 1;
    } else {
        int GCD = gcd(abs(n),abs(d));
        res.num = n/GCD;
        res.den = d/GCD;
    }
    return res;
}

int main () { }
