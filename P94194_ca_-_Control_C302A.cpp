#include <bits/stdc++.h>
using namespace std;

void compta(int n1, int n2, int& p1, int& p2) {
    p1 += n1, p2 += n2;
}

int main () {
    string s;
    int p1=0, p2=0;
    while (cin >> s) {
        if (s == "FRAU") {
            cout << "FRAU" << endl;
            return 0;
        }
        int n1, n2;
        cin >> n1 >> n2;
        compta(n1, n2, p1, p2);
    }
    if (p1 > p2) cout << "el guanyador es en Pepito" << endl;
    else if (p1 == p2) cout << "empat" << endl;
    else cout << "el guanyador es en Jaumet" << endl;
}
