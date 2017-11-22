int gcd (const int& a, const int& b) {
    return (b)? gcd(b, a%b) : a;
}

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
        int GCD = gcd(((n<0)? -n : n), d);
        res.num = n/GCD;
        res.den = d/GCD;
    }
    return res;
}

Racional suma(const Racional& a, const Racional& b) {
    return racional(a.num*b.den + b.num*a.den, a.den*b.den);
}

Racional resta(const Racional& a, const Racional& b) {
    return racional(a.num*b.den - b.num*a.den, a.den*b.den);
}

Racional producte(const Racional& a, const Racional& b) {
    return racional(a.num*b.num, a.den*b.den);
}

Racional divisio(const Racional& a, const Racional& b) {
    return racional(a.num*b.den, a.den*b.num);
}

void suma_un(Racional& r) {
    r = suma(r, {1, 1});
}

int main () {}
