#include <bits/stdc++.h>
using namespace std;

template <typename T>
T gcd (T a, T b) { return (b==0)? a : gcd(b,a%b); }

struct frac {

    int n, d;

    frac (int n=0, int d=1) : n(n), d(d) {
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

    friend istream& operator>> (istream& in, frac& f) {
        in >> f.n >> f.d;
        f.simplify();
        return in;
    }

    friend ostream& operator<< (ostream& out, frac& f) {
        out << f.n;
        if (f.d!=1) out << '/' << f.d;
        return out;
    }

    inline frac operator+ (const frac& f) const { return frac(n*f.d+f.n*d,d*f.d); }
    inline frac operator* (const frac& f) const { return frac(n*f.n,d*f.d); }
    inline frac operator* (const int& k) const { return frac(n*k,d); }
    inline frac operator- (const frac& f) const { return *this + f*-1; }
    inline frac operator/ (const frac& f) const { return frac(n*f.d,d*f.n); }

    inline frac operator+= (const frac& f) { *this = *this + f; return *this; }
    inline frac operator-= (const frac& f) { *this = *this - f; return *this; }
    inline frac operator*= (const frac& f) { *this = *this * f; return *this; }
    inline frac operator/= (const frac& f) { *this = *this / f; return *this; }

};

int main () {
    frac f,g;
    string s;
    cin >> f;
    cout << f << endl;
    while (cin >> s >> g) {
        if (s=="suma") f+=g;
        else if (s=="resta") f-=g;
        else if (s=="multiplica") f*=g;
        else if (s=="divideix") f/=g;
        cout << f << endl;
    }
}
