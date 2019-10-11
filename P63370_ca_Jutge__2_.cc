#include <bits/stdc++.h>
using namespace std;

struct Enviament {
    string dni;
    string exer;
    int temps;
    string res;

    friend istream& operator>> (istream& in, Enviament& env) {
        // change ordre so that dni is now exer since algorithm is equal to P14343
        in >> env.exer >> env.dni >> env.temps >> env.res;
        return in;
    }
};

int main () {
    int n;
    cin >> n;

    map <string, map <string, string> > problemes;
    map <string, int> enviaments_verds;

    string dni_last = "-";
    int time_last = 0;
    for (int i = 0; i < n; ++i) {
        Enviament enviament;
        cin >> enviament;
        if (enviament.temps > time_last) time_last = enviament.temps, dni_last = enviament.dni;
        string* veredict = &problemes[enviament.dni][enviament.exer];
        if (*veredict == "vermell" and enviament.res != "vermell") *veredict = enviament.res;
        else if (*veredict == "groc" and enviament.res == "verd") *veredict = "verd";
        else if (*veredict == "") *veredict = enviament.res;
        if (enviament.res == "verd") ++enviaments_verds[enviament.dni];
    }

    string dni_mx_intents="-", dni_mx_verds="-", dni_mx_vermells="-";
    size_t mx_verds=0, mx_vermells=0, mx_intents=0;
    for (auto pers : problemes) {
        if (pers.second.size() > mx_intents)
            dni_mx_intents = pers.first, mx_intents = pers.second.size();
        else if (pers.second.size() == mx_intents)
            dni_mx_intents = min(dni_mx_intents, pers.first);

        size_t verds=0, vermells=0;
        for (auto envis : pers.second)
            if (envis.second == "verd") ++verds;
            else if (envis.second == "vermell") ++vermells;

        if (verds > mx_verds) mx_verds = verds, dni_mx_verds = pers.first;
        else if (verds == mx_verds) dni_mx_verds = min(pers.first, dni_mx_verds);
        if (vermells > mx_vermells) mx_vermells = vermells, dni_mx_vermells = pers.first;
        else if (vermells == mx_vermells) dni_mx_vermells = min(pers.first, dni_mx_vermells);
    }

    string dni_mx_env_verds = "-";
    int mx_env_verds = 0;
    for (auto pers : enviaments_verds)
        if (pers.second > mx_env_verds) mx_env_verds = pers.second, dni_mx_env_verds = pers.first;
        else if (pers.second == mx_env_verds) dni_mx_env_verds = min(dni_mx_env_verds, pers.first);

    cout << "exercici amb mes enviaments verds:     " << dni_mx_env_verds;
    if (mx_env_verds) cout << " (" << mx_env_verds << ')';
    cout << endl << "exercici amb mes alumnes verds:        " << dni_mx_verds;
    if (mx_verds) cout << " (" << mx_verds << ')';
    cout << endl << "exercici amb mes alumnes vermells:     " << dni_mx_vermells;
    if (mx_vermells) cout << " (" << mx_vermells << ')';
    cout << endl << "exercici que mes alumnes han intentat: " << dni_mx_intents;
    if (mx_intents) cout << " (" << mx_intents << ')';
    cout << endl << "exercici de l'ultim enviament:         " << dni_last << endl;
}
