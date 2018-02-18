#include <bits/stdc++.h>
using namespace std;

struct equipo {
    string nombre;
    int total, pg, pe, pp;

    bool operator< (const equipo& b) const;

    friend istream& operator>> (istream& in, equipo& p) {
        in >> p.total >> p.pg >> p.pe >> p.pp >> p.nombre;
        return in;
    }
    friend ostream& operator<< (ostream& out, const equipo& p) {
        out << p.nombre << ' ' << p.total << ' ' << p.pg << ' ' << p.pe << ' ' << p.pp;
        return out;
    }
};

bool comp (const equipo& a, const equipo& b) {
    if (a.total == b.total) {
        if (a.pg == b.pg) {
            if (a.pe == b.pe) return a.nombre < b.nombre;
            return a.pe > b.pe;
        }
        return a.pg > b.pg;
    }
    return a.total > b.total;
}

bool equipo::operator< (const equipo& b) const {
    return comp(*this, b);
}

template <typename T> ostream& operator<< (ostream& out, const vector<T>& v) {
    for (const auto& element : v) out << element << endl;
    return out;
}

template <typename T> istream& operator>> (istream& in, vector<T>& v) {
    for (auto &element : v) in >> element;
    return in;
}

int main () {
    int n;
    cin >> n;
    vector <equipo> v(n);
    cin >> v;
    sort(v.begin(), v.end());
    cout << v;
}
