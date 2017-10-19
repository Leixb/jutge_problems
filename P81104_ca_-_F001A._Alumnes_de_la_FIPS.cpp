#include <bits/stdc++.h>
using namespace std;

struct Assignatura {
    string nom;                 // Nom de l’assignatura
    double nota;                // Entre 0 i 10, -1 indica NP
};

struct Alumne {
    string nom;                 // Nom de l’alumne
    int dni;                    // DNI de l’alumne
    vector<Assignatura> ass;    // Llista d’assignatures de l’alumne
};

double nota(const vector<Alumne>& alums, int dni, string nom) {
    for (auto alumn : alums)
        if (alumn.dni == dni)
            for (auto ass : alumn.ass)
                if (ass.nom == nom) return ass.nota;
    return -1;
}

double mitjana(const vector<Assignatura>& ass) {
    double sum = 0;
    int elements = 0;
    for (size_t i = 0; i < ass.size(); ++i)
        if (ass[i].nota > -0.1) {
            ++elements;
            sum += ass[i].nota;
        }
    if (elements == 0) return -1;
    return sum/elements;
}

void compta(const vector<Alumne>& alums, int dni, string nom, int& com) {
    com = 0;
    double nota_alumne = nota(alums, dni, nom);
    for (auto alumn : alums) if (nota_alumne < mitjana(alumn.ass)) ++com;
}

int main () {
    int n;
    cin >> n;
    vector <Alumne> alumns (n);
    for (int i = 0; i < n; ++i) {
        cin >> alumns[i].nom >> alumns[i].dni;
        int m;
        cin >> m;
        while (m--) {
            Assignatura ass;
            cin >> ass.nom >> ass.nota;
            alumns[i].ass.push_back(ass);
        }
    }
    int dni, com;
    string nom;
    while (cin >> dni >> nom) {
        compta(alumns, dni, nom, com);
        cout << com << endl;
    }
}
