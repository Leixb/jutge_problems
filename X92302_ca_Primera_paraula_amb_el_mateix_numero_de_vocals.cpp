#include <bits/stdc++.h>
using namespace std;

void LlegirParaules(vector<string>& cas, string& paraula) {
    while (paraula != "FI") {
        cas.push_back(paraula);
        cin >> paraula;
    }
}

int nombre_vocals(const string& paraula) {
    int vocals = 0;
    for (const auto& lletra : paraula)
        if (lletra == 'A'
         or lletra == 'E'
         or lletra == 'I'
         or lletra == 'O'
         or lletra == 'U') ++vocals;
    return vocals;
}

int main () {
    string paraula;
    while (cin >> paraula) {
        vector<string> cas;
        LlegirParaules(cas, paraula);

        int vocals = cas.size()? nombre_vocals(cas.back()) : -1;

        size_t pos;
        for (pos = 0; pos < cas.size(); ++pos)
            if (nombre_vocals(cas[pos]) == vocals) break;

        if (pos+1 < cas.size()) cout << cas[pos] << ", " << pos << endl;
        else cout << '-' << endl;
    }
}
