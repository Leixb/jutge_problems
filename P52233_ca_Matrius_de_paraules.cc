#include <iostream>
#include <vector>
using namespace std;

typedef vector<string> Fila;
typedef vector<Fila> Matriu;

int nombre_de_paraules(const Matriu& m, char c, int k) {
    int n = 0;
    for (int i=0; i < m.size(); i++)
        for (int j=0; j < m[i].size(); j++)
            if (k < m[i][j].size() and m[i][j][k]==c) n++;
    return n;
}

int main () {
    int n;
    cin >> n;
    vector <vector <string> > v (n,vector <string> (n));
    for (int i=0; i < v.size(); i++) {
        for (int j=0; j < v[i].size(); j++) {
            cin >> v[i][j];
        }
    }
    int k;
    char c;
    cin >> c >> k;
    cout << nombre_de_paraules(v,c,k) << endl;
}
