#include <bits/stdc++.h>
using namespace std;

bool es_ascendent(int n) {
    int prev = -1;
    while (n > 0) {
        int r = n%10;
        if (prev != -1) {
            if (r==9 and prev!=0) return false;
            else if ((r+1)%10 != prev) return false;
        }
        prev = r;
        n/=10;
    }
    return true;
}

int main () {
    int n;
    bool prev = false;
    while (cin >> n) {
        bool res = es_ascendent(n);
        if (prev and res) {
            cout << "SI" << endl;
            return 0;
        }
        prev = res;
    }
    cout << "NO" << endl;
}
