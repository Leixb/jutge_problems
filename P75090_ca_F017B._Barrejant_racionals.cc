#include <bits/stdc++.h>
using namespace std;

struct Racional {
    int num, den;

    friend ostream& operator<< (ostream& out, const Racional& r) {
        out << r.num << '/' << r.den;
        return out;
    }

    friend istream& operator>> (istream& in, Racional& r) {
        char trash;
        in >> r.num >> trash >> r.den;
        return in;
    }
};

int comparador(const Racional& a, const Racional& b) {
    return a.num*b.den - b.num*a.den;
}

template <typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (auto& i : v) is >> i;
    return is;
}

int main () {
    int n;
    cin >> n;
    vector<Racional> a(n);
    cin >> a;
    int m;
    cin >> m;
    vector<Racional> b(m);
    cin >> b;

    vector <Racional> res;

    int i=0, j=0;
    while (i < n) {
        if (j < m) {
            int comp = comparador(a[i], b[j]);
            if (comp > 0) {
                if (res.size() == 0 or comparador(b[j], res.back()) > 0) res.push_back(b[j]);
                ++j;
            } else if (comp < 0) {
                if (res.size() == 0 or comparador(a[i], res.back()) > 0) res.push_back(a[i]);
                ++i;
            } else {
                if (res.size() == 0 or comparador(a[i], res.back()) > 0) res.push_back(a[i]);
                ++i, ++j;
            }
        } else {
            if (res.size() == 0 or comparador(a[i], res.back()) > 0) res.push_back(a[i]);
            ++i;
        }
    }
    while (j < m) {
        if (res.size() == 0 or comparador(b[j], res.back()) > 0) res.push_back(b[j]);
        ++j;
    }

    for (const auto& num : res) cout << num << endl;
}
