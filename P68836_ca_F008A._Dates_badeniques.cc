#include <bits/stdc++.h>
using namespace std;

struct Data {
    int dia, mes, any;
    friend istream& operator>> (istream& in, Data& d) {
        char shit;
        in >> d.dia >> shit >> d.mes >> shit >> d.any;
        return in;
    }
};

bool menor(const Data& d1, const Data& d2) {
    if (d1.any < d2.any) return true;
    else if (d1.any > d2.any) return false;
    if (d1.mes < d2.mes) return true;
    else if (d1.mes > d2.mes) return false;
    return d1.dia < d2.dia;
}

int main () {
    int n;
    Data a, b, c;
    cin >> n >> a >> b;
    n-=2;
    while (n-- and cin >> c)
        if ((menor(a, b) and menor(b, c)) or (menor(c, b) and menor(b, a))) {
            cout << b.dia << '/' << b.mes << '/' << b.any << endl;
            return 0;
        } else {
            a = b;
            b = c;
        }
    cout << "cap data trobada" << endl;
}
