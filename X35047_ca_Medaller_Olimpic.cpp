#include <bits/stdc++.h>
using namespace std;

struct pais {
    string nombre;
    int oro, plata, bronce;
};

bool comp(const pais& a, const pais& b) {
    if (a.oro == b.oro) {
        if (a.plata == b.plata) {
            if (a.bronce == b.bronce) return a.nombre < b.nombre;
            return a.bronce > b.bronce;
        }
        return a.plata > b.plata;
    }
    return a.oro > b.oro;
}

istream& operator>> (istream& in, pais& p) {
    in >> p.oro >> p.plata >> p.bronce >> p.nombre;
    return in;
}

ostream& operator<< (ostream& out, const pais& p) {
    out << p.nombre << ' ' << p.oro << ' ' << p.plata << ' ' << p.bronce << ' ' << p.oro + p.plata + p.bronce;
    return out;
}

template <typename T>
ostream& operator<< (ostream& out, const vector<T>& v) {
    for (const auto& element : v) out << element << endl;
    return out;
}

template <typename T>
istream& operator>> (istream& in, vector<T>& v) {
    for (auto &element : v) in >> element;
    return in;
}

int main () {
    int n;
    cin >> n;
    vector <pais> v(n);
    cin >> v;

    sort(v.begin(), v.end(), comp);

    cout << v;
}
