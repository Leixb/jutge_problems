#include <bits/stdc++.h>
using namespace std;

int compara(int d1, int m1, int a1, int d2, int m2, int a2) {
    if (a1 > a2) return 1;
    else if (a1 < a2) return -1;
    else {
        if (m1 > m2) return 1;
        else if (m1 < m2) return -1;
        else {
            if (d1 > d2) return 1;
            else if (d1 < d2) return -1;
            else return 0;
        }
    }
}

int main () {
    int d1, m1, a1, d2, m2, a2;
    while (scanf("%d/%d/%d %d/%d/%d", &d1, &m1, &a1, &d2, &m2, &a2) == 6) {
        int comp = compara(d1, m1, a1, d2, m2, a2);
        if (comp == 1) cout << "posterior" << endl;
        else if (comp == -1) cout << "anterior" << endl;
        else cout << "iguals" << endl;
    }
}
