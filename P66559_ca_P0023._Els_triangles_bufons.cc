#include <bits/stdc++.h>
using namespace std;

void escriu_triangle(int t) {
    t+=1;
    for (int i = 1; i < t ; ++i) {
        cout << string(t*2-i*2-1,' ') ;
        for (int j = 0; j < i; ++j) {
            if (j > 0) cout << "  ";
            cout << "/\\";
        }
        cout << endl;
        cout << string(t*2-i*2 -2,' ') ;
        for (int j = 0; j < i; ++j) cout << "/__\\";
        cout << endl;
    }
    cout << endl;
}

int main () {
    int n;
    while (cin >> n and n > 0) escriu_triangle(n);
}
