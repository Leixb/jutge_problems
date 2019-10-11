#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    set <pair <int, string> > S;
    while (n--) {
        string nom;
        int edat;
        cin >> nom >> edat;
        S.insert({-edat, nom});
    }
    for (auto persona : S)
        cout << persona.second << ' ' << -persona.first << endl;
}
