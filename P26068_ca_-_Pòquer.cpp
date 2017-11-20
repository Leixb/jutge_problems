#include <bits/stdc++.h>
using namespace std;

enum jugada { RES, PARELLA, DOBLE_PARELLA, TRIO, FULL, POQUER, REPOQUER };

vector <int> process (const vector<vector<int> >& cartes) {
    if (cartes[5].size()) return {REPOQUER, cartes[5][0]};
    if (cartes[4].size()) return {POQUER, cartes[4][0], cartes[1][0]};
    if (cartes[3].size()) {
        if (cartes[2].size()) return {FULL, cartes[3][0], cartes[2][0]};

        int a = cartes[1][0], b = cartes[1][1];
        if (a < b) swap(a, b);
        return {TRIO, cartes[3][0], a, b};
    }
    if (cartes[2].size() == 2) {
        int a = cartes[2][0], b = cartes[2][1];
        if (a < b) swap(a, b);
        return {DOBLE_PARELLA, a, b, cartes[1][0]};
    }
    if (cartes[2].size()) {
        vector<int> v = cartes[1];
        sort(v.begin(), v.end(), greater<int>());
        v.insert(v.begin(), cartes[2][0]);
        v.insert(v.begin(), PARELLA);
        return v;
    }
    vector<int> v = cartes[1];
    sort(v.begin(), v.end(), greater<int>());
    v.insert(v.begin(), RES);
    return v;
}

int main () {
    int anna=0, bernat=0;
    const map <char, int> valor = {{'A', 5}, {'R', 4}, {'Q', 3}, {'C', 2}, {'D', 1}, {'N', 0}};

    string sa, sb;

    while (cin >> sa >> sb) {
        map <int, int> cartes_a;
        for (const auto& i : sa) ++cartes_a[i];
        map <int, int> cartes_b;
        for (const auto& i : sb) ++cartes_b[i];

        vector <vector<int> > grups_anna(6), grups_bernat(6);
        for (const auto& carta : cartes_a) grups_anna[carta.second].push_back(valor.at(carta.first));
        for (const auto& carta : cartes_b) grups_bernat[carta.second].push_back(valor.at(carta.first));


        bool anna_winner = true;

        vector <int> points_anna = process(grups_anna),
               points_bernat = process(grups_bernat);

        for (size_t i = 0; i < points_anna.size() and i < points_bernat.size(); ++i) {
            if (points_bernat[i] > points_anna[i]) {
                anna_winner = false;
                break;
            } else if (points_anna[i] > points_bernat[i]) break;
        }

        if (anna_winner) {
            cout << "Anna" << endl;
            ++anna;
        } else {
            cout << "Bernat" << endl;
            ++bernat;
        }
    }

    cout << "Guanyades per l'Anna: " << anna << endl << "Guanyades per en Bernat: " << bernat << endl;
}
