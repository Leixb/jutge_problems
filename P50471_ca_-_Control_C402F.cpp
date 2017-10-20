#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <pair <int, string> > v;
    while (n--) {
        string nom;
        int preu;
        cin >> nom >> preu;
        v.push_back({preu, nom});
    }
    int k;
    cin >> k;
    sort(v.begin(), v.end());
    size_t i;
    for (i = 0; i < v.size(); ++i) if (v[i].first > k) break;
    if (i > 0) cout << "guanyador/a: " << v[i-1].second << endl;
    else cout << "CAP GUANYADOR" << endl;
}
