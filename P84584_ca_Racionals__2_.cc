#include <bits/stdc++.h>
using namespace std;

template <typename T>
T gcd(const T& a, const T& b) { 
    return (b)? gcd(b, a%b) : a;
}

struct Racional {
    int num, den;
};

void llegeix_racional(Racional& r, bool& final) {
    if (cin >> r.num >> r.den) {
        final = false;
        if (r.den < 0) r.num*=-1, r.den*=-1;
        if (r.num == 0) {
            r.num = 0;
            r.den = 1;
        } else {
            int GCD = gcd(abs(r.num), r.den);
            r.num /= GCD;
            r.den /= GCD;
        }
    } else final = true;
}


void escriu_racional(const Racional& r) {
    cout << r.num;
    if (r.den != 1) cout << '/' << r.den;
}

int main () { }
