#include <iostream>
#include <vector>
using namespace std;

struct Alumne {
    int dni;
    string nom;
};

struct Nota {
    int dni;
    string ass;     // assignatura
    string fac;     // facultat
    double nota;
};

void llegeix_alumnes(vector<Alumne>& alumnes) {
    int m;
    cin >> m;
    alumnes = vector<Alumne>(m);
    for (int i = 0; i < m; ++i) cin >> alumnes[i].dni >> alumnes[i].nom;
}

void llegeix_notes(vector<Nota>& notes) {
    int n;
    cin >> n;
    notes = vector<Nota>(n);
    for (int i = 0; i < n; ++i) {
        cin >> notes[i].dni >> notes[i].ass >> notes[i].fac >> notes[i].nota;
    }
}

string nom_from_dni(int dni, const vector<Alumne>& alumnes) {
    int L=0, R=alumnes.size()-1;
    while (L <= R) {
        int M = (L+R)/2;
        if (alumnes[M].dni == dni) return alumnes[M].nom;
        else if (alumnes[M].dni < dni) L = M+1;
        else R = M-1;
    }
    return "";
}

int main() {
    cout.setf(ios::fixed);      // estableix el format dels reals
    cout.precision(2);          // per escriure les notes

    vector<Alumne> alumnes;
    vector<Nota> notes;
    llegeix_alumnes(alumnes);
    llegeix_notes(notes);

    string prev_nom= "";
    double cont=0, total=0;
    bool ok = false;
    for (size_t i = 0; i < notes.size(); ++i) {
        int dni = notes[i].dni;
        string nom = nom_from_dni(notes[i].dni, alumnes);
        if (nom != "") {
            ok = true;
            if (nom != prev_nom) {
                if (prev_nom != "") cout << "     mitjana: " << total/cont << endl << endl;
                total = cont = 0;
                cout << dni << ' ' << nom << endl;
                prev_nom = nom;
            }
            ++cont;
            total += notes[i].nota;
            cout << "     " << notes[i].ass << ' ' << notes[i].fac << ' ' << notes[i].nota << endl;
        }
    }
    if (ok) cout << "     mitjana: " << total/cont << endl << endl;
}
