#include <bits/stdc++.h>
using namespace std;

int mx(int x) {
    int res = 0;
    while (x>0) {
        res = max(res,x%10);
        x/=10;
    }
    return res;
}

int engreixa(int x) {
    if (x==0) return 0;
    return mx(x) + 10*engreixa(x/10);
}

int main () {
    int n;
    while (cin >> n) cout << engreixa(n) << endl;
}
