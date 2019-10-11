#include <bits/stdc++.h>
using namespace std;

bool es_poderos(int n) {
    if (n==1) return true;
    for (int i = 2; n > 1; i+=2) {
        if (i==4) i = 3;
        if (n%i == 0) {
            n/=i;
            if (n%i != 0) return false;
            while (n%i==0) n/=i;
        }
    }
    return true;
}

int main () {
    int n;
    while (cin >> n) {
        cout << 1;
        for (int i = 2; i <= n; ++i) if (es_poderos(i)) cout << ',' << i;
        cout << endl;
    }
}
