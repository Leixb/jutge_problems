#include <bits/stdc++.h>
using namespace std;

const vector <string> unitats = {
    "zero", "un", "dos", "tres", "quatre", "cinc", "sis", "set", "vuit", "nou",
    "deu", "onze", "dotze", "tretze", "catorze", "quinze", "setze", "disset",
    "divuit", "dinou"
};

const vector <string> desenes = {
    "zero", "deu", "vint", "trenta", "quaranta", "cinquanta", "seixanta",
    "setanta", "vuitanta", "noranta"
};

string transcriu_doblet(const int& n) {
    if (not n) return "";
    string s = "";
    if (n < 20) return unitats[n];
    if (n >= 20) s += desenes[n/10];
    if (n%10) {
        if (n > 20 and n < 30) s += "-i";
        s += "-" + unitats[n%10];
    }
    return s;
}

string transcriu_triplet(const int& n) {
    if (not n) return "";
    string s = "";
    if (n>=200) {
        s = unitats[n/100] + "-cents";
    } else if (n >= 100) {
        s = "cent";
    }
    if (n%100 == 0) return s;
    if (s != "") s += " ";
    return s + transcriu_doblet(n%100);
}

string transcriu(const int& n) {
    if (not n) return "zero";
    string s = "";

    bool space = false;

    if (n >= 2e9) s += unitats[n/1e9] + " mil";
    else if (n >= 1e9) s += "mil";

    if (n >= 1e9) space = true;

    int milions = (n/int(1e6))%1000;
    int milers = (n/int(1e3))%1000;
    int centen = n%1000;

    if (milions or n >= 1e9) {
        if (space) s += " ";
        string triplet = transcriu_triplet(milions);
        s += triplet;

        if (n >= 1e9) {
            if (triplet == "") s += "milions";
            else s += " milions";
        } else if (triplet == "un") s += " milio";
        else s += " milions";
        space = true;
    }
    if (milers) {
        if (space) s += " ";
        string triplet = transcriu_triplet(milers);
        if (triplet == "un") s += "mil";
        else s += triplet + " mil";
        space = true;
    }
    if (centen) {
        if (space) s += " ";
        s += transcriu_triplet(centen);
    }

    return s;
}

int main () {
    int n;
    while (cin >> n) cout << n << ": " << transcriu(n) << '.' << endl;
}
