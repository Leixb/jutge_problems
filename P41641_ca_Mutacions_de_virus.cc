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
    const map<string, string> M = {{"TTT", "Phe"}, {"TTC", "Phe"},
        {"TTA", "Leu"}, {"TTG", "Leu"}, {"CTT", "Leu"}, {"CTC", "Leu"}, {"CTA", "Leu"},
        {"CTG", "Leu"}, {"ATT", "Ile"}, {"ATC", "Ile"}, {"ATA", "Ile"}, {"ATG", "Met"},
        {"GTT", "Val"}, {"GTC", "Val"}, {"GTA", "Val"}, {"GTG", "Val"}, {"TCT", "Ser"},
        {"TCC", "Ser"}, {"TCA", "Ser"}, {"TCG", "Ser"}, {"CCT", "Pro"}, {"CCC", "Pro"},
        {"CCA", "Pro"}, {"CCG", "Pro"}, {"ACT", "Thr"}, {"ACC", "Thr"}, {"ACA", "Thr"},
        {"ACG", "Thr"}, {"GCT", "Ala"}, {"GCC", "Ala"}, {"GCA", "Ala"}, {"GCG", "Ala"},
        {"TAT", "Tyr"}, {"TAC", "Tyr"}, {"TAA", "STOP"}, {"TAG", "STOP"},
        {"CAT", "His"}, {"CAC", "His"}, {"CAA", "Gln"}, {"CAG", "Gln"}, {"AAT", "Asn"},
        {"AAC", "Asn"}, {"AAA", "Lys"}, {"AAG", "Lys"}, {"GAT", "Asp"}, {"GAC", "Asp"},
        {"GAA", "Glu"}, {"GAG", "Glu"}, {"TGT", "Cys"}, {"TGC", "Cys"}, {"TGA", "STOP"},
        {"TGG", "Trp"}, {"CGT", "Arg"}, {"CGC", "Arg"}, {"CGA", "Arg"}, {"CGG", "Arg"},
        {"AGT", "Ser"}, {"AGC", "Ser"}, {"AGA", "Arg"}, {"AGG", "Arg"}, {"GGT", "Gly"},
        {"GGC", "Gly"}, {"GGA", "Gly"}, {"GGG", "Gly"}};

    int n;
    cin >> n;
    while (n--) {
        string a, b;
        cin >> a >> b;

        bool equivalents = true;
        int bases_differents = 0;
        for (size_t i = kmp(a, "ATG")+3, cont = 1; i < a.size(); (i += 3), ++cont) {
            string codo_a = {a[i-2], a[i-1], a[i]},
                   codo_b = {b[i-2], b[i-1], b[i]};
            string amino_a = M.at(codo_a);

            if (amino_a == "STOP") break;

            if (codo_a != codo_b) {
                string amino_b = M.at(codo_b);

                ++bases_differents;


                if (amino_a != amino_b) {
                    if (!equivalents) cout << ',';
                    cout << amino_a << '-' << cont << '-' << amino_b;
                    equivalents = false;
                }
            }
        }
        if (equivalents) cout << "Equivalents";
        cout << " (" << bases_differents << ")" << endl;
    }
}
