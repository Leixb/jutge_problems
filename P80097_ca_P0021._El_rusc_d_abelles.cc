#include <bits/stdc++.h>
using namespace std;

void pinta_rusc(int f, int c) {
    for (int i = 0; i < c; ++i ) cout << ((i==0)? " " : "   ") << '_';
    cout << endl;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) cout << ((j==0)?"":"_") << "/ \\";
        cout << endl;
        for (int j = 0; j < c; ++j) cout << ((j==0)?"":" ") << "\\_/";
        cout << endl;
    }

}

int main () {
    int f,c;
    bool first = true;
    while (cin >> f >> c) {
        if (first) first = false;
        else cout << endl;
        pinta_rusc(f,c);
    }
}
