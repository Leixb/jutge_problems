#include <bits/stdc++.h>
using namespace std;

void infoSequencia(int& max, int& lpos) {
    int n, pos = 1;
    max = 0;
    while (cin >> n and n != 0) {
        if (n >= max) {
            max = n;
            lpos = pos;
        }
        ++pos;
    }
}

void trobaSequencia(const int& m, int &lpos) {
    int n, pos = lpos = 0;
    while (cin >> n and n != 0) {
        ++pos;
        if (n == m) {
            lpos = pos;
            return;
        }
    }
}

int main () {
    int max, lpos, lpos2;
    infoSequencia(max,lpos);
    trobaSequencia(max,lpos2);
    cout << max << ' ' << lpos << ' ';
    if (lpos2!=0) cout << lpos2 << endl;
    else cout << '-' << endl;
}
