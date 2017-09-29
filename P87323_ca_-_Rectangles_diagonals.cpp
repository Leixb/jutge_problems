#include <bits/stdc++.h>
using namespace std;

int main () {
    int f,c;
    cin >> f >> c;
    for (int i = 0; i < f; ++i) {
        int cont = i;
        for (int j = 0; j < c; ++j) {
            cout << (cont)%10;
            (j>=i)? ++cont : --cont;
        }
        cout << endl;
    }
}
