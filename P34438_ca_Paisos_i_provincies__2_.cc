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

int habitants(const Paisos& p, double x) {
    int hab = 0;
    for (auto pais : p) {
        int cont = 0, hab_pais = 0;
        for (auto provincia : pais.provs) {
            if (provincia.pib <= x) cont++;
            hab_pais += provincia.habitants;
        }
        if (cont >= 2) hab += hab_pais;
    }
    return hab;
}


int main () { }
