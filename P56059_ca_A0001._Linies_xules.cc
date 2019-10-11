#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, cont=0, xules=0;
    while(cin >> n) {
        bool xula = 1;
        string t ="";
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            if (i==0) t = s;
            else if (i==n/2 and t != s) xula = 0;
            else if (i == n-1 and t!= s) xula = 0;
        }
        if (xula and n%2) ++xules;
        ++cont;
    }
    if (cont == xules) cout << "totes xules" << endl;
    else if (xules == 0) cout << "cap de xula" << endl;
    else cout << "dels dos tipus" << endl;
}
