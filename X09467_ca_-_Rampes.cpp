#include <bits/stdc++.h>
using namespace std;

vector <bool> pos_rampas (const vector <int>& V) {
    vector <bool> pos (V.size());
    for (size_t i = 0; i+2 < V.size(); ++i)
        pos[i] = (V[i]< V[i+1] and V[i+1] < V[i+2]) or (V[i] > V[i+1] and V[i+1] > V[i+2]);
    return pos;
}

int pot_conflictives (const vector <bool>& B) {
    int conflictes = 0;
    for (size_t i = 0; i+2 < B.size(); ++i)
        if (B[i]) conflictes += B[i+2] + B[i+1];
    return conflictes;
}

int main () {
    int n;
    while (cin >> n) {
        vector <int> V (n);
        for (int i = 0; i < n; ++i) cin >> V[i];

        vector <bool> rampes = pos_rampas(V);
        cout << "posicions amb rampa:";
        for (int i = 0; i < n; ++i) if (rampes[i]) cout << ' ' << i;

        cout << endl << "potencialment conflictives: " << pot_conflictives(rampes) << endl << "---" << endl;
    }
}
