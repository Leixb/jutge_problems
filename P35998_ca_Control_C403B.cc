#include <bits/stdc++.h>
using namespace std;

struct Corredor {
    string nom;
    int mins, segs;
};

int main () {
    int n;
    while (cin >> n) {
        vector <Corredor> v;
        while (n--) {
            Corredor c;
            cin >> c.nom >> c.mins >> c.segs;
            v.push_back(c);
        }
        sort(v.begin(), v.end(),
                [](const Corredor& a, const Corredor& b) -> bool {
                    if (a.mins == b.mins) {
                        if (a.segs == b.segs) return a.nom < b.nom;
                        return a.segs < b.segs;
                    }
                    return a.mins < b.mins;
                });
        for (Corredor c : v) cout << c.nom << ' ' << c.mins << ' ' << c.segs << endl;
        cout << "***" << endl;
    }
}
