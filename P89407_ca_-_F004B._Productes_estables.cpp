#include <bits/stdc++.h>
using namespace std;

bool mateixos_digits(int x, int y, int b) {
    vector <int> da (b,0), db (b,0);
    int xy = x*y;
    while(x > 0) {
        ++da[x%b];
        x/=b;
    }
    while(y > 0) {
        ++da[y%b];
        y/=b;
    }
    while(xy > 0) {
        ++db[xy%b];
        xy/=b;
    }
    for (int i = 0; i < b; ++i) if (da[i] != db[i]) return false;
    return true;
}

void escriu(int n, int b) {
    string s = "";
    while (n > 0) {
        int r = n%b;
        s = string(1, r+((r>9)? 'A'-10 : '0')) + s;
        n/=b;
    }
    cout << s;
}

int main () {
    int x,y;
    while (cin >> x >> y) {
        cout << "solucions per a " << x << " i " << y << endl;
        bool found = false;
        for (int b = 2; b <= 16; ++b) {
            if (mateixos_digits(x,y,b)) {
                found = true;
                escriu(x,b);
                cout << " * ";
                escriu(y,b);
                cout << " = ";
                escriu(x*y,b);
                cout << " (base " << b << ')'<< endl;
            }
        }
        if (not found) cout << "cap" << endl;
        cout << endl;
    }
}
