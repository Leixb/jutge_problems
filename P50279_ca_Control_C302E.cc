#include <bits/stdc++.h>
using namespace std;

char complement(char c) {
    if (c=='A') return 'T';
    if (c=='T') return 'A';
    if (c=='C') return 'G';
    if (c=='G') return 'C';
}

int main () {
    char c, a='z',b='z';
    bool go = false;
    while (cin >> c) {
        if (go) cout << complement(c);
        else if (c=='G' and a == 'T' and b == 'A') go = true;
        else {
            a = b;
            b = c;
        }
    }
    cout << endl;
}
