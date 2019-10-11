#include <bits/stdc++.h>
using namespace std;

struct Parella { string par; int freq; };

int main () {
    map <char, int> M;
    M['A']=M['B']=M['C']=2;
    M['D']=M['E']=M['F']=3;
    M['G']=M['H']=M['I']=4;
    M['J']=M['K']=M['L']=5;
    M['M']=M['N']=M['O']=6;
    M['P']=M['Q']=M['R']=M['S']=7;
    M['T']=M['U']=M['V']=8;
    M['W']=M['X']=M['Y']=M['Z']=9;

    int n;
    cin >> n;

    map<string, Parella> MM;

    for (string paraula; n-- and cin >> paraula;) {
        Parella p;
        p.par = paraula;
        string s = "";
        cin >> p.freq;
        for (const auto& lletra : paraula) s += M[lletra] + '0';
        if (MM.count(s)) {
            if (MM[s].freq == p.freq) {
                if (MM[s].par > p.par) MM[s] = p;
            } else if (MM[s].freq < p.freq) MM[s] = p;

        } else MM[s] = p;
    }

    for (string s; cin >> s;) {
        if (MM.count(s)) {
            cout << s << ": " << MM[s].par << endl;
        } else cout << s << ": ???" << endl;
    }
}
