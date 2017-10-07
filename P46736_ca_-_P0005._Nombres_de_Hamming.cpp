#include <bits/stdc++.h>
using namespace std;

bool es_de_hamming(int x) {
    while (x > 2)
        if (x%2==0) x/=2;
        else if (x%3==0) x/=3;
        else if (x%5==0) x/=5;
        else return false;
    return true;
}

int main () {
    int n;
    while (cin >> n) {
        if (n>=1) cout << 1;
        for (int i = 1, j = 2; i < n; ++j)
            if (es_de_hamming(j) and ++i) cout << ',' << j;
        cout << endl;
    }
}
