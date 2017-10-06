#include <bits/stdc++.h>
using namespace std;

void llegeix_hora(int& h, int& m, int& s) {
    char c;
    int cont = 0;
    h = m = s = 0;
    while (cin >> c) {
        if (c=='|') cont++;
        if (cont <= 3) {
            if (cont == 1) h<<=1;
            else if (cont == 2) m<<=1;
            else s<<=1;
            if (c=='*') {
                if (cont == 1) ++h;
                else if (cont == 2) ++m;
                else ++s;
            }
        } else break;
    }
}

void escriu_hora(int h, int m, int s) {
    cout << h << ':' << m << ':' << s << endl;
}

int main () {
    int n;
    cin >> n;
    while (n--) {
        int h,m,s;
        llegeix_hora(h,m,s);
        escriu_hora(h,m,s);
    }
}
