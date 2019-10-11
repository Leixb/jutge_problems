#include <bits/stdc++.h>
using namespace std;

int main () {
    int as,ap,d,n;
    bool cont = 0;
    cin >> as >> ap >> n;
    while (cin >> d) {
        cont^=1;
        n+= ((cont)? as : ap) - d;
        cout << n << endl;
    }
}

