#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Poblacio {
    string pob;
    int    alt;
    string com;
};

string tipusComarca(const vector<Poblacio> & lpob, const string & comarca) {
    bool mount = true, sea = true;
    for (size_t i = 0; i < lpob.size() and (mount or sea); ++i)
        if (lpob[i].com == comarca) {
            mount = mount and lpob[i].alt >= 500;
            sea = sea and lpob[i].alt < 500;
        }
    if (mount) return "mountain";
    if (sea) return "seaside";
    return "mixed";
}

vector<Poblacio> llegir_poblacions(int n) {
    vector<Poblacio> lpobl(n);
    for (int i = 0; i < n; ++i) {
        cin >> lpobl[i].pob >> lpobl[i].alt >> lpobl[i].com;
    }
    return lpobl;
}

int main() {
    int n;
    cin >> n;
    vector <Poblacio> lpobl = llegir_poblacions(n);

    for (string nom; cin >> nom;) cout << nom << ": " << tipusComarca(lpobl, nom) << endl;
}
