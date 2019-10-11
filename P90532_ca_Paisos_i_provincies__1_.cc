#include <bits/stdc++.h>
using namespace std;

struct Provincia {
    string nom;
    string capital;
    int habitants;
    int area;
    double pib;
};

struct Pais {
    string nom;
    string capital;
    vector<Provincia> provs;
};

typedef vector<Pais> Paisos;

double pib(const Paisos& p, char c, double d) {
    double res = 0;
    for (auto pais : p)
        if (pais.nom[0] == c) {
            for (auto provincia : pais.provs) {
                if (double(provincia.habitants) > d*provincia.area) res += provincia.pib;
            }
        }
    return res;

}

int main () {
}
