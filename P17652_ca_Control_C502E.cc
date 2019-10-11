#include <bits/stdc++.h>
using namespace std;

struct Persona {
    string nom;
    bool dona;
    int edat;

    friend istream& operator>> (istream& in, Persona& p) {
        string s;
        in >> p.nom >> s >> p.edat;
        p.dona = s == "dona";
        return in;
    }
    friend ostream& operator<< (ostream& out, Persona& p) {
        out << p.nom << ' ' << p.edat;
        return out;
    }
};

int main () {
    int n;
    cin >> n;
    vector <Persona> persones(n);

    int oldest = 0;
    for (int i = 0; i < n; ++i) {
        cin >> persones[i];
        if (not persones[i].dona and persones[i].edat > oldest)
            oldest = persones[i].edat;
    }
    for (int i = 0; i < n; ++i)
        if (persones[i].dona and persones[i].edat < oldest)
            cout << persones[i] << endl;
}
