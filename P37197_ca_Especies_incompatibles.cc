#include <bits/stdc++.h>
using namespace std;

int lletra_to_int (const char& c) {
    if (c>='a') return c-'a' + 27;
    else return c-'A';
}

void back(const char especies[], const vector<vector<bool> >& incompat, char fila[], const int& n, bool done[], int depth = 0) {
    if (depth == n) {
        for (int i = 0; i < n; ++i) cout << fila[i];
        cout << endl;
    } else {
        for (int i = 0; i < n; ++i) {
            if (!done[i]) {
                if (depth > 0 and incompat[lletra_to_int(fila[depth-1])][lletra_to_int(especies[i])]) continue;
                fila[depth] = especies[i];
                done[i] = true;
                back(especies, incompat, fila, n, done, depth+1);
                done[i] = false;
            }
        }
    }
}

int main () {
    int n;
    cin >> n;
    char *especies = new char[n];
    map <char, int> n_especie;
    for (int i = 0; i < n; ++i) {
        cin >> especies[i];
        n_especie[especies[i]] = i;
    }
    vector<vector<bool> > incompat (55, vector<bool> (55, false));
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        char a, b;
        cin >> a >> b;
        incompat[lletra_to_int(b)][lletra_to_int(a)] = incompat[lletra_to_int(a)][lletra_to_int(b)] = true;
    }
    back(especies, incompat, new char[n], n, new bool[n]());
}
