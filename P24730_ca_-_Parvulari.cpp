#include <bits/stdc++.h>
using namespace std;

struct Profesor {
    string nom;
    int caramels, pastanagues;
    friend istream& operator>> (istream& in, Profesor& p) {
        in >> p.nom >> p.caramels >> p.pastanagues;
        return in;
    }
    bool operator< (const Profesor& p) {
        if (p.caramels == caramels) {
            if (p.pastanagues == pastanagues) {
                if (p.nom.size() == nom.size()) return nom < p.nom;
                return nom.size() < p.nom.size();
            }
            return pastanagues > p.pastanagues;
        }
        return caramels > p.caramels;
    }
};

int main () {
    int n;
    cin >> n;
    while (n--) {
        int p;
        cin >> p;
        vector <Profesor> v (p);
        for (size_t i = 0; i < v.size(); ++i) cin >> v[i];
        sort(v.begin(), v.end());
        for (auto profe : v) cout << profe.nom << endl;
        cout << endl;
    }
}
