#include <bits/stdc++.h>
using namespace std;

int kmp(const string& text, const string& pattern) { // KMP
    if (text.size() < pattern.size()) return text.size();
    // Build fail table of pattern
    vector <int> F (pattern.size(), 0);
    for(size_t i = 2; i < pattern.size(); ++i)
        for(int j = F[i-1];; j = F[j])
            if(pattern[j] == pattern[i - 1]) {
                F[i] = j + 1;
                break;
            } else if (j == 0) break; // F[i] = 0
    // Search pattern in text
    for(size_t i = 0, j = 0; j < text.size();) // i = index of pattern
        if(text[j] == pattern[i] and (++i, ++j)) {
            if(i == pattern.size()) return j-1;
        } else if(i > 0) i = F[i]; // go back using fail table
        else ++j;
    return text.size();
}

int main () {
    const map<string, string> M = {{"UUU", "Phe"}, {"UUC", "Phe"},
        {"UUA", "Leu"}, {"UUG", "Leu"}, {"CUU", "Leu"}, {"CUC", "Leu"}, {"CUA", "Leu"},
        {"CUG", "Leu"}, {"AUU", "Ile"}, {"AUC", "Ile"}, {"AUA", "Ile"}, {"AUG", "Met"},
        {"GUU", "Val"}, {"GUC", "Val"}, {"GUA", "Val"}, {"GUG", "Val"}, {"UCU", "Ser"},
        {"UCC", "Ser"}, {"UCA", "Ser"}, {"UCG", "Ser"}, {"CCU", "Pro"}, {"CCC", "Pro"},
        {"CCA", "Pro"}, {"CCG", "Pro"}, {"ACU", "Thr"}, {"ACC", "Thr"}, {"ACA", "Thr"},
        {"ACG", "Thr"}, {"GCU", "Ala"}, {"GCC", "Ala"}, {"GCA", "Ala"}, {"GCG", "Ala"},
        {"UAU", "Tyr"}, {"UAC", "Tyr"}, {"UAA", "STOP"}, {"UAG", "STOP"},
        {"CAU", "His"}, {"CAC", "His"}, {"CAA", "Gln"}, {"CAG", "Gln"}, {"AAU", "Asn"},
        {"AAC", "Asn"}, {"AAA", "Lys"}, {"AAG", "Lys"}, {"GAU", "Asp"}, {"GAC", "Asp"},
        {"GAA", "Glu"}, {"GAG", "Glu"}, {"UGU", "Cys"}, {"UGC", "Cys"}, {"UGA", "STOP"},
        {"UGG", "Trp"}, {"CGU", "Arg"}, {"CGC", "Arg"}, {"CGA", "Arg"}, {"CGG", "Arg"},
        {"AGU", "Ser"}, {"AGC", "Ser"}, {"AGA", "Arg"}, {"AGG", "Arg"}, {"GGU", "Gly"},
        {"GGC", "Gly"}, {"GGA", "Gly"}, {"GGG", "Gly"}};

    char c;
    while (cin >> c and c != ':');
    string s, genoma = "";
    while (cin >> s) genoma += s;

    for (size_t i = kmp(genoma, "AUG")+3, cont = 0; i < genoma.size(); i += 3) {
        string codo = {genoma[i-2], genoma[i-1], genoma[i]};

        string amino = M.at(codo);
        if (amino == "STOP") break;
        cout << amino;

        if (++cont >= 26) {
            cout << endl;
            cont = 0;
        }
    }
    cout << endl;
}
