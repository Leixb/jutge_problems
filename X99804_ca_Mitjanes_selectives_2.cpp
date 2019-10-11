#include <bits/stdc++.h>
//#include "Estudiant.hh"
using namespace std;

struct stud {
    int dni;
    double nota;
    bool operator< (const stud& est) {
        if (est.nota == nota) return est.dni > dni;
        return est.nota < nota;
    }
};

ostream& operator<< (ostream& os, const stud& est) {
    os << est.dni << ' ' << est.nota;
    return os;
}


int main () {
    int M, N, S;
    cin >> M >> N >> S;

    vector<bool> selec(N, false);

    for (int i = 0; i < S; ++i) {
        int b;
        cin >> b;
        selec[b-1] = true;
    }

    vector <stud> v;

    for (int i = 0; i < M; ++i) {

        int dni;
        cin >> dni;

        double sum=0;
        for (int j = 0; j < N; ++j) {
            double nota;
            cin >> nota;

            if (selec[j]) sum += nota;
        }

        v.push_back({dni, sum/S});
    }

    sort(v.begin(), v.end());

    for (const auto& el : v) cout << el << endl;

}
