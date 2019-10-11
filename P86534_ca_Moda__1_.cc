#include <bits/stdc++.h>
using namespace std;

int main () {
    for (int n; cin >> n and n;) {
        map<string,int> M;
        string mes_rep;
        cin >> mes_rep;
        ++M[mes_rep];
        for (string s; --n and cin >> s;) {
            ++M[s];
            if (M[s] > M[mes_rep]) mes_rep = s;
            else if (M[s] == M[mes_rep] and s > mes_rep) mes_rep = s;
        }
        cout << mes_rep << endl;
    }
}
