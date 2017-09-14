#include <iostream>
using namespace std;

int main () {
    int g;
    while (cin >> g) {
        g++;
        bool b = 1, z=1;
        while (g--) {
            int n;
            cin >> n;
            z&=(n==0);
            if (b) {
                b=0;
                if (n==0) {b = 1; continue;}
                if (g>=2) { 
                    if (n==1) cout << "x^" << g;
                    else if (n==-1) cout << "-x^" << g;
                    else  cout << n << "x^" << g;
                } else if (g==1) {
                    if (n==1) cout << 'x';
                    else if (n==-1) cout << "-x";
                    else  cout << n << 'x';
                } else cout << n;
                continue;
            } else b = 0;
            char c = '+';
            if (n==0) continue;
            if (n < 0) {
                c = '-';
                n*=-1;
            } 
            if (n==1) {
                if (g>=2) cout << ' ' << c << " x^" << g;
                else if (g==1) cout << ' ' << c << " x";
                else cout << ' ' << c << ' ' << 1;
                continue;
            }
            if (g>=2) cout << ' ' << c << ' ' << n << "x^" << g;
            else if (g==1) cout << ' ' << c << ' ' << n << 'x';
            else cout << ' ' << c << ' ' << n;
        }
        if (z) cout << 0;
        cout << endl;
    }
}
