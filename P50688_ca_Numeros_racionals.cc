int gcd (const int& a, const int& b) {
    return (b)? gcd(b, a%b) : a;
}

struct racional {
    int num, den;

    racional(int n, int d) {
        if (d < 0) n*=-1, d*=-1;
        if (n==0) {
            num = 0;
            den = 1;
        } else {
            int GCD = gcd(((n<0)? -n : n), d);
            num = n/GCD;
            den = d/GCD;
        }
    }
};


racional suma(const racional& a, const racional& b) {
    return racional(a.num*b.den + b.num*a.den, a.den*b.den);
}

racional resta(const racional& a, const racional& b) {
    return racional(a.num*b.den - b.num*a.den, a.den*b.den);
}

racional producte(const racional& a, const racional& b) {
    return racional(a.num*b.num, a.den*b.den);
}

racional divisio(const racional& a, const racional& b) {
    return racional(a.num*b.den, a.den*b.num);
}

void suma_un(racional& r) {
    r = suma(r, {1, 1});
}
