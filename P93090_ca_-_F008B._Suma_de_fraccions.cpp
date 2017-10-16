#include <bits/stdc++.h>
using namespace std;

template <typename T>
T gcd (T a, T b) { return (b==0)? a : gcd(b,a%b); }

struct Fraccio {

    int n, d;

    Fraccio (int n=0, int d=1) : n(n), d(d) {
        simplify();
    }

    void simplify () {
        if (d < 0) n*=-1, d*=-1;
        if (n==0) d = 1;
        else {
            auto egcd = gcd(abs(n),abs(d));
            n /= egcd;
            d /= egcd;
        }
    }

    friend istream& operator>> (istream& in, Fraccio& f) {
        char c;
        in >> f.n >> c >> f.d;
        f.simplify();
        return in;
    }

    friend ostream& operator<< (ostream& out, Fraccio& f) {
        out << f.n << '/' << f.d;
        return out;
    }

    inline Fraccio operator+ (const Fraccio& f) const { return Fraccio(n*f.d+f.n*d,d*f.d); }
    inline Fraccio operator* (const Fraccio& f) const { return Fraccio(n*f.n,d*f.d); }
    inline Fraccio operator* (const int& k) const { return Fraccio(n*k,d); }
    inline Fraccio operator- (const Fraccio& f) const { return *this + f*-1; }
    inline Fraccio operator/ (const Fraccio& f) const { return Fraccio(n*f.d,d*f.n); }

    inline Fraccio operator+= (const Fraccio& f) { *this = *this + f; return *this; }
    inline Fraccio operator-= (const Fraccio& f) { *this = *this - f; return *this; }
    inline Fraccio operator*= (const Fraccio& f) { *this = *this * f; return *this; }
    inline Fraccio operator/= (const Fraccio& f) { *this = *this / f; return *this; }

};

Fraccio suma(const Fraccio& x, const Fraccio& y) {
    return x + y;
}

int main () {
    Fraccio f, total;
    char c;
    while (cin >> f >> c and c=='+') total += f;
    total += f;
    cout << total << endl;
}
